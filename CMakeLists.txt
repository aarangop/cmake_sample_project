cmake_minimum_required(VERSION 3.12)

project(sample_project LANGUAGES CXX)

add_subdirectory(src)

enable_testing()
add_subdirectory(tests)