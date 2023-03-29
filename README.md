# qt_httpClient


基于qt6.3.2 版本实现的http_client

对 Qt 的QNetworkAccessManager 进行了二次封装。访问 HTTP 服务。
使用流行的 Fluent 风格 API，简化 GET、POST、PUT、DELETE、上传、下载等操作。

在执行请求前设置需要的参数和回调函数:

    调用 header() 设置请求头

    调用 param() 设置参数，使用 Form 表单的方式提交请求，GET 请求的 query parameters 也可以用它设置

    调用 json() 设置 JSON 字符串的 request body，Content-Type 为 application/json

        当然也可以不是 JSON 格式，因使用 request body 的情况多数是使用 JSON 格式传递复杂对象，故命名为 json()

    调用 success() 注册请求成功的回调函数

    调用 fail() 注册请求失败的回调函数

    调用 complete() 注册请求结束的回调函数

然后根据请求的类型调用 get(), post(), put(), remove(), download(), upload() 执行 HTTP 请求。

#### 具体操作参考main.cpp
