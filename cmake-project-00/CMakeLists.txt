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

# These are project-specific
set(CPACK_PACKAGE_NAME MyProj-00)
set(CPACK_PACKAGE_VENDOR MyCompany)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "My Project-00")

# These lines tend to be the same for every project
set(CPACK_PACKAGE_INSTALL_DIRECTORY ${CPACK_PACKAGE_NAME})
set(CPACK_VERBATIM_VARIABLES TRUE)

set(CPACK_GENERATOR TGZ)

# This is what writes out the input file for cpack
include(CPack)
