#!/bin/sh

./clean.sh
docker build --tag shardsbuilder .
docker run -v $(pwd):/shards shardsbuilder Release
exit 0
