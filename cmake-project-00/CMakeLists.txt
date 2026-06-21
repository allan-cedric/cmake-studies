cmake_minimum_required(VERSION 3.28)
project(
    MyProj-00
    VERSION 1.0.0
)

add_library(FooLib STATIC foo.cpp)

add_executable(MyApp main.cpp)
target_link_libraries(MyApp PRIVATE FooLib)
