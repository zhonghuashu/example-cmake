example-cmake
=================================
# Introduction
Example cmake code downloaded from [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html).
- 

# Build
- Build and run
```shell
cd ~/github/example-conan/cmake-tutorial
mkdir Step1_build && cd Step1_build
cmake ../Step1
cmake --build .
$ ./Tutorial 4
The square root of 4 is 2
```
- Install and test
```shell
cmake --install . --prefix "./install"
ctest
```
- Packaging installer
```shell
$ cpack
Tutorial-1.0-Linux.tar.gz generated.
```
- Packaging debug and release
```shell
mkdir Step12_build_debug && cd Step12_build_debug
cmake -DCMAKE_BUILD_TYPE=Debug ../Step12
cmake --build .

mkdir Step12_build_release && cd Step12_build_release
cmake -DCMAKE_BUILD_TYPE=Release ../Step12
cmake --build .

cpack --config ../Step12/MultiCPackConfig.cmake
```