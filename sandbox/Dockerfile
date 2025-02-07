FROM debian:bookworm

ENV HTTP_PROXY=
ENV HTTPS_PROXY=

RUN groupadd pocketnc -g 1000
RUN useradd pocketnc -g 1000 -u 1000 -s /bin/bash -m

RUN apt update && apt upgrade -y

RUN apt-get install -y  build-essential \
                        cmake \
                        fakeroot \
                        devscripts \
                        python3 \
                        apt-cudf \
                        avahi-utils \
                        libavahi-client-dev \
                        libgtk2.0-dev \
                        libudev-dev \
                        libck-dev \
                        libcgroup-dev \
                        libcmocka-dev \
                        libreadline-dev \
                        libmodbus-dev \
                        libusb-dev \
                        libusb-1.0-0-dev \
                        libwebsockets-dev \
                        libgtk2.0-dev \
                        pkg-config \
                        pybuild-plugin-pyproject \
                        cython3 \
                        libjansson-dev \
                        protobuf-compiler \
                        yapps2 \
                        python3-dev \
                        python3-pip \
                        python3-venv \
                        python3-protobuf \
                        sudo \
                        vim \
                        rsync \
                        libczmq-dev \
                        systemd-timesyncd \
                        rsync \
                        libboost-all-dev

RUN apt install -y libczmq-dev
RUN apt install -y libcap2-bin
WORKDIR /root/
RUN mkdir /src
WORKDIR /src
RUN echo "pocketnc  ALL=NOPASSWD:ALL" | tee -a /etc/sudoers

# No idea why these are needed here
RUN setcap 'cap_sys_admin=ep cap_audit_write=ep' /usr/bin/sudo
RUN setcap 'cap_setuid=ep cap_setgid=ep' /usr/bin/sudo

USER pocketnc
WORKDIR /home/pocketnc/
WORKDIR /src/
# COPY machine-kit /src
