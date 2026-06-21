cmake_minimum_required(VERSION 3.28)
project(
    MyProj-00
    VERSION 1.0.0
)

enable_testing()

add_library(FooLib STATIC "src/foo.cpp")
target_include_directories(FooLib PUBLIC "include")

add_executable(MyApp "src/main.cpp")
target_link_libraries(MyApp PRIVATE FooLib)

install(TARGETS MyApp FooLib)

add_test(NAME MyAppTest COMMAND MyApp)
