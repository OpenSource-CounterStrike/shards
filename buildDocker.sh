#!/bin/sh

./clean.sh
docker build --tag shardsbuilder .
docker run -v $(pwd):/shards shardsbuilder Debug
exit 0
