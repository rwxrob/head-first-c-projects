FROM conanio/gcc11-ubuntu16.04

LABEL MAINTAINER "Rob Muhlestein <rob@rwx.gg>"
LABEL SOURCE "https://github.com/rwxrob/head-first-c-projects"

ENV DEBIAN_FRONTEND=noninteractive

RUN yes | unminimize && \
    apt-get -y --no-install-recommends upgrade && \
    apt-get install -y apt-utils vim

# TODO
