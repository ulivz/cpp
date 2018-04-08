# 错误记录

1. Xcode 项目 使用 Clion 打开, 运行报错：

重现步骤，使用 Xcode 创建一个 CLI 项目，然后用 Clion打开，CMakelist 如下：

```
cmake_minimum_required(VERSION 3.10)
project(my_cpp)

set(CMAKE_CXX_STANDARD 11)

add_executable(my_cpp main.cpp)
```

接着 load cmake project，运行，报错如下：

```
[ 50%] Linking CXX executable my_cpp
Undefined symbols for architecture x86_64:
  "my_constant()", referenced from:
      _main in main.cpp.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make[3]: *** [my_cpp] Error 1
make[2]: *** [CMakeFiles/my_cpp.dir/all] Error 2
make[1]: *** [CMakeFiles/my_cpp.dir/rule] Error 2
make: *** [my_cpp] Error 2
```




