mkdir buildRelease 
cd buildRelease
cmake --config=Release ..
msbuild Shards.sln
cd ..
