FROM ctf_create_img

RUN adduser noob
COPY out /
WORKDIR /

RUN chmod 777 ./chall3

EXPOSE 31337
USER noob
CMD tcpserver -t 50 -RHl0 0.0.0.0 31337 ./chall3
