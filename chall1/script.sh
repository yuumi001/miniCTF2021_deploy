#!/bin/bash
while true;
do
docker kill chall1
docker rm chall1
docker run -d --name=chall1 -p 0.0.0.0:2222:31337 chall1
sleep 300
done;
