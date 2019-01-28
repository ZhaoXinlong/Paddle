# PaddlePaddle


[![Build Status](https://travis-ci.org/PaddlePaddle/Paddle.svg?branch=develop)](https://travis-ci.org/PaddlePaddle/Paddle)
[![Documentation Status](https://img.shields.io/badge/docs-latest-brightgreen.svg?style=flat)](http://paddlepaddle.org/documentation/docs/en/1.2/getstarted/index_en.html)
[![Documentation Status](https://img.shields.io/badge/中文文档-最新-brightgreen.svg)](http://paddlepaddle.org/documentation/docs/zh/1.2/beginners_guide/index.html)
[![Release](https://img.shields.io/github/release/PaddlePaddle/Paddle.svg)](https://github.com/PaddlePaddle/Paddle/releases)
[![License](https://img.shields.io/badge/license-Apache%202-blue.svg)](LICENSE)


Welcome to the PaddlePaddle GitHub.

PaddlePaddle (PArallel Distributed Deep LEarning) is an easy-to-use,
efficient, flexible and scalable deep learning platform, which is originally
developed by Baidu scientists and engineers for the purpose of applying deep
learning to many products at Baidu.

Our vision is to enable deep learning for everyone via PaddlePaddle.
Please refer to our [release announcement](https://github.com/PaddlePaddle/Paddle/releases) to track the latest feature of PaddlePaddle.


欢迎来到 PaddlePaddle GitHub

PaddlePaddle (PArallel Distributed Deep LEarning) 是一个简单易用、高效灵活、可扩展的深度学习平台，最初由百度科学家和工程师共同开发，目的是将深度学习技术应用到百度的众多产品中。

我们的愿景是让每个人都能通过 PaddlePaddle 接触深度学习

跟进 PaddlePaddle 最新特性请参考我们的[版本说明](https://github.com/PaddlePaddle/Paddle/releases)


### Latest PaddlePaddle Release: [Fluid 1.2.0](https://github.com/PaddlePaddle/Paddle/tree/release/1.2)
### Install Latest Stable Release:
```
# Linux CPU
pip install paddlepaddle
# Linux GPU cuda9cudnn7
pip install paddlepaddle-gpu
# Linux GPU cuda8cudnn7
pip install paddlepaddle-gpu==1.2.0.post87
# Linux GPU cuda8cudnn5
pip install paddlepaddle-gpu==1.2.0.post85

# For installation on other platform, refer to http://paddlepaddle.org/
```


### PaddlePaddle 最新版本: [Fluid 1.2.0](https://github.com/PaddlePaddle/Paddle/tree/release/1.2)
### 安装最新稳定版本:
```
# Linux CPU
pip install paddlepaddle
# Linux GPU cuda9cudnn7
pip install paddlepaddle-gpu
# Linux GPU cuda8cudnn7
pip install paddlepaddle-gpu==1.2.0.post87
# Linux GPU cuda8cudnn5
pip install paddlepaddle-gpu==1.2.0.post85

# 其他平台上的安装指引请参考 http://paddlepaddle.org/
```


## Features

- **Flexibility**

    PaddlePaddle supports a wide range of neural network architectures and
    optimization algorithms. It is easy to configure complex models such as
    neural machine translation model with attention mechanism or complex memory
    connection.

-  **Efficiency**

    In order to unleash the power of heterogeneous computing resource,
    optimization occurs at different levels of PaddlePaddle, including
    computing, memory, architecture and communication. The following are some
    examples:

      - Optimized math operations through SSE/AVX intrinsics, BLAS libraries
      (e.g. MKL, OpenBLAS, cuBLAS) or customized CPU/GPU kernels.
      - Optimized CNN networks through MKL-DNN library.
      - Highly optimized recurrent networks which can handle **variable-length**
      sequence without padding.
      - Optimized local and distributed training for models with high dimensional
      sparse data.

- **Scalability**

    With PaddlePaddle, it is easy to use many CPUs/GPUs and machines to speed
    up your training. PaddlePaddle can achieve high throughput and performance
    via optimized communication.

- **Connected to Products**

    In addition, PaddlePaddle is also designed to be easily deployable. At Baidu,
    PaddlePaddle has been deployed into products and services with a vast number
    of users, including ad click-through rate (CTR) prediction, large-scale image
    classification, optical character recognition(OCR), search ranking, computer
    virus detection, recommendation, etc. It is widely utilized in products at
    Baidu and it has achieved a significant impact. We hope you can also explore
    the capability of PaddlePaddle to make an impact on your product.

## 特点

- **灵活性**

    PaddlePaddle 支持丰富的神经网络架构和优化算法。易于配置复杂模型，例如带有注意力机制或复杂记忆连接的神经网络机器翻译模型。

-  **高效性**

    为了高效使用异步计算资源，PaddlePaddle 对框架的不同层进行优化，包括计算、存储、架构和通信。下面是一些样例：
    
    - 通过 SSE/AVX 内置函数、BLAS 库(例如MKL、OpenBLAS、cuBLAS)或定制的CPU/GPU内核优化数学操作。
    - 通过 MKL-DNN 库优化 CNN 网络
    - 高度优化循环网络，无需执行 `padding` 操作即可处理 **变长** 序列
    - 针对高维稀疏数据模型，优化了局部和分布式训练。
     

- **稳定性**

    有了 PaddlePaddle，使得利用各种 CPU/GPU 和机器来加速训练变得简单。PaddlePaddle 通过优化通信可以实现巨大吞吐量和快速执行。

- **连接产品**

    另外，PaddlePaddle 的设计也易于部署。在百度，PaddlePaddle 已经部署到含有巨大用户量的产品和服务上，包括广告点击率（CTR）预测、大规模图像分类、光学字符识别（OCR）、搜索排序，计算机病毒检测、推荐系统等等。PaddlePaddle 广泛应用于百度产品中，产生了非常重要的影响。我们希望您也能探索 PaddlePaddle 的能力，为您的产品创造新的影响力和效果。

## Installation

It is recommended to read [this doc](http://paddlepaddle.org/documentation/docs/zh/1.2/beginners_guide/install/index_cn.html) on our website.

## 安装

推荐阅读官网上的[安装说明](http://paddlepaddle.org/documentation/docs/zh/1.2/beginners_guide/install/index_cn.html) 

## Documentation

We provide [English](http://paddlepaddle.org/documentation/docs/en/1.2/getstarted/index_en.html) and
[Chinese](http://paddlepaddle.org/documentation/docs/zh/1.2/beginners_guide/index.html) documentation.

- [Deep Learning 101](https://github.com/PaddlePaddle/book)

  You might want to start from this online interactive book that can run in a Jupyter Notebook.

- [Distributed Training](http://paddlepaddle.org/documentation/docs/zh/1.2/user_guides/howto/training/cluster_howto.html)

  You can run distributed training jobs on MPI clusters.

- [Python API](http://paddlepaddle.org/documentation/docs/zh/1.2/api_cn/index_cn.html)

   Our new API enables much shorter programs.

- [How to Contribute](http://paddlepaddle.org/documentation/docs/zh/1.2/advanced_usage/development/contribute_to_paddle/index_cn.html)

   We appreciate your contributions!

## 文档

我们提供[英文](http://paddlepaddle.org/documentation/docs/en/1.2/getstarted/index_en.html)和
[中文](http://paddlepaddle.org/documentation/docs/zh/1.2/beginners_guide/index.html) 文档

- [深度学习 101](https://github.com/PaddlePaddle/book)

  或许您想从这个在线交互式书籍开始，可以在Jupyter Notebook中运行

- [分布式训练](http://paddlepaddle.org/documentation/docs/zh/1.2/user_guides/howto/training/cluster_howto.html)

  可以在 MPI 集群上运行分布式训练任务

- [Python API](http://paddlepaddle.org/documentation/docs/zh/1.2/api_cn/index_cn.html)

   新的 API 支持代码更少更简洁的程序

- [贡献方式](http://paddlepaddle.org/documentation/docs/zh/1.2/advanced_usage/development/contribute_to_paddle/index_cn.html)

   欢迎您的贡献!

## Ask Questions

You are welcome to submit questions and report bugs as [Github Issues](https://github.com/PaddlePaddle/Paddle/issues).

## 答疑

欢迎您将问题和 bug 以 [Github Issues](https://github.com/PaddlePaddle/Paddle/issues)的形式提交

## Copyright and License
PaddlePaddle is provided under the [Apache-2.0 license](LICENSE).

## 版权和许可证
PaddlePaddle 采用 [Apache-2.0 license](LICENSE) 许可
