#!/bin/bash
docker kill chall1
docker rm chall1
docker run -d --name=chall1 -p 0.0.0.0:10002:31337 chall1

docker kill chall2
docker rm chall2
docker run -d --name=chall2 -p 0.0.0.0:10003:31337 chall2

docker kill chall3
docker rm chall3
docker run -d --name=chall3 -p 0.0.0.0:10004:31337 chall3

docker kill chall4
docker rm chall4
docker run -d --name=chall4 -p 0.0.0.0:10005:31337 chall4

docker kill chall_nc
docker rm chall_nc
docker run -d --name=chall_nc -p 0.0.0.0:10001:31337 chall_nc

