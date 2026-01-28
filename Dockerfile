FROM debian:latest

RUN apt-get update \
 && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    git python3 python3-pip python3-venv sudo build-essential \
    gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi \
    gcc-avr binutils-avr avr-libc dfu-programmer dfu-util dos2unix \
    unzip zip wget curl \
 && apt-get clean \
 && rm -rf /var/lib/apt/lists/*

RUN python3 -m pip install --no-cache-dir qmk appdirs --break-system-packages

WORKDIR /root
