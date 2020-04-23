#!/bin/sh

mkdir -p build && cd build
cmake --config=Debug .. 
make -j$(nproc)
cd ..
