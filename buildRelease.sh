#!/bin/bash

mkdir -p build && cd build
cmake --config=Release ..
make -j$(nproc)
cd ..
