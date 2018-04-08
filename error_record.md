# 错误记录

### 1. Xcode 项目 使用 Clion 打开运行报错

- 重现步骤：

使用 Xcode 创建一个多文件 CLI 项目，然后用 Clion 打开，`CMakeLists.txt` 如下：

```cmake
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

- 解决方案：

通过在 stackoverflow 查询，找到这个问题 [How to create a shared library with cmake?](https://stackoverflow.com/questions/17511496/how-to-create-a-shared-library-with-cmake)

可以通过在 `CMakeLists.txt` 中添加下述字段来解决：

```cmake
file(GLOB SOURCES
        src/*.hpp
        src/*.cpp)
```

但是，根据 CMake 的官方文档：[Command - file](https://cmake.org/cmake/help/v3.3/command/file.html?highlight=glob#file):

> Note: We do not recommend using GLOB to collect a list of source files from your source tree. If no CMakeLists.txt file changes when a source is added or removed then the generated build system cannot know when to ask CMake to regenerate.

> 注意，我们不推荐使用 GLOB 去为你个源文件树收集一个源文件的列表，因为如果 CMakeLists.txt 并未更改，但有一个源文件被添加或者删除了，这回导致构建系统不知道何时去重新生成。






