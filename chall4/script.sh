#!/bin/bash
while true;
do
docker kill chall4
docker rm chall4
docker run -d --name=chall4 -p 0.0.0.0:2225:31337 chall4
sleep 300
done;
