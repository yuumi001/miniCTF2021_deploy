FROM ctf_create_img

RUN adduser noob
COPY chall4 /
WORKDIR /

RUN chmod 777 ./chall4

EXPOSE 31337
USER noob
CMD tcpserver -t 50 -RHl0 0.0.0.0 31337 ./chall4
