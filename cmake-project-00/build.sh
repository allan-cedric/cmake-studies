#!/usr/bin/sh

# Execution: ./build.sh <TARGET>

TARGET=$1

# cmake -G "Unix Makefiles" -B build
cmake -B build
cmake --build build --target ${TARGET}
cmake --install build --prefix .
