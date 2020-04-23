#!/bin/bash

mkdir -p buildRelease && cd buildRelease
cmake --config=Release ..
make -j$(nproc)
cd ..
