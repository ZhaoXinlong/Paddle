/* Copyright (c) 2016 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#include "paddle/fluid/operators/hash_op.h"
#include <string>
#include <vector>

namespace paddle {
namespace operators {

class HashOp : public framework::OperatorWithKernel {
 public:
  HashOp(const std::string &type, const framework::VariableNameMap &inputs,
         const framework::VariableNameMap &outputs,
         const framework::AttributeMap &attrs)
      : OperatorWithKernel(type, inputs, outputs, attrs) {}

  void InferShape(framework::InferShapeContext *ctx) const override {
    PADDLE_ENFORCE(ctx->HasInput("X"),
                   "Input(X) of HashOp should not be null.");
    PADDLE_ENFORCE(ctx->HasOutput("Out"),
                   "Output(Out) of HashOp should not be null.");

    auto dims = ctx->GetInputDim("X");
    PADDLE_ENFORCE_EQ(dims.size(), 2UL,
                      "The input of hash_op's dimensions must be 2");
    std::vector<int64_t> out_dims;
    out_dims.reserve(dims.size() + 1);
    // copy all dims except the last one
    for (int i = 0u; i != dims.size() - 1; ++i) {
      out_dims.emplace_back(dims[i]);
    }
    int num_hash = ctx->Attrs().Get<int>("num_hash");
    out_dims.emplace_back(num_hash);
    // keep the last dim to 1
    out_dims.emplace_back(1);

    ctx->SetOutputDim("Out", framework::make_ddim(out_dims));
    ctx->ShareLoD("X", /*->*/ "Out");
  }
};

class HashOpMaker : public framework::OpProtoAndCheckerMaker {
 public:
  void Make() override {
    AddInput("X", "(Tensor) Input tensor of scale operator.");
    AddOutput("Out", "(Tensor) Output tensor of scale operator.");
    AddComment(R"DOC(
**Hash Operator**
$$Out = scale * X$$
)DOC");
    AddAttr<int>("num_hash", "").SetDefault(1);
    AddAttr<int>("mod_by", "").SetDefault(100000);
  }
};

}  // namespace operators
}  // namespace paddle

namespace ops = paddle::operators;

REGISTER_OP_WITHOUT_GRADIENT(hash, ops::HashOp, ops::HashOpMaker);
REGISTER_OP_CPU_KERNEL(hash, ops::HashKerel<int>, ops::HashKerel<int64_t>);
