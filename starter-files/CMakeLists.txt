cmake_minimum_required(VERSION 3.14)
project(Lists)

set(CMAKE_CXX_STANDARD 14)

add_executable(Matrix_public_test Matrix_public_test.cpp)
add_executable(Matrix_tests Matrix_tests.cpp)
add_executable(Image_public_test Image_public_test.cpp)
add_executable(Image_tests Image_tests.cpp)
add_executable(processing_public_tests processing_public_tests.cpp)
add_executable(resize resize.cpp)
