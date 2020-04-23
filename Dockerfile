FROM opensuse/tumbleweed

RUN zypper -n update
RUN zypper -n install cmake
RUN zypper -n install make
RUN zypper -n install gcc
RUN zypper -n install gcc-c++
RUN zypper -n install xorg-x11-devel

COPY . shards
WORKDIR shards

ENTRYPOINT [ "/shards/docker-entrypoint.sh" ]

