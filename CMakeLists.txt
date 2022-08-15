project(compressor)
cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)

add_subdirectory(lib)
add_subdirectory(cli)
add_subdirectory(gui)
add_subdirectory(test/cpp)
