#!/bin/bash
while true;
do
docker kill chall3
docker rm chall3
docker run -d --name=chall3 -p 0.0.0.0:2224:31337 chall3
sleep 300
done;
