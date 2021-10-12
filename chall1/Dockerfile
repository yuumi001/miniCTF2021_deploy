FROM yukimina/ctf_create_img

RUN adduser noob
COPY chall1 /
COPY flag.txt /
WORKDIR /

RUN chmod 777 ./chall1

EXPOSE 31337
USER noob
CMD tcpserver -t 50 -RHl0 0.0.0.0 31337 ./chall1

