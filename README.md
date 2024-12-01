example-cmake
=================================
## cmake-tutorial
Example cmake code downloaded from [CMake tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html).
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
- Build complete example
```shell
cd ~/github/example-conan/cmake-tutorial
mkdir build && cd build
cmake ../Complete
cmake --build .
cmake --install . --prefix "./install"
```

## cmake-hello
CMake quick start project from [VS Code](https://code.visualstudio.com/docs/cpp/cmake-quickstart).

## cmake-find
[Find package](https://cmake.org/cmake/help/book/mastering-cmake/chapter/Finding%20Packages.html)
- Build and run
```shell
mkdir cmake-find/build && cd cmake-find/build
# Find package from specific folder.
cmake -DCMAKE_PREFIX_PATH=/root/github/example-cmake/cmake-tutorial/Step11_build/install/lib/cmake/MathFunctions ..

```