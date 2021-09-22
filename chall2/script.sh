#!/bin/bash
while true;
do
docker kill chall2
docker rm chall2
docker run -d --name=chall2 -p 0.0.0.0:2223:31337 chall2
sleep 300
done;
