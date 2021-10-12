FROM ubuntu:20.04

RUN apt update

# Install python3
RUN apt install -y python3 socat python3-pip
RUN pip install pycryptodome

# user used by docker
RUN useradd -d /home/leve -m -p leve -s /bin/bash leve
RUN echo "leve:leve" | chpasswd

USER leve 
WORKDIR /home/leve


COPY source/chall.py .
COPY source/flag .

ENTRYPOINT socat tcp-l:8080,fork,reuseaddr exec:'python3 -u chall.py' && /bin/bash
