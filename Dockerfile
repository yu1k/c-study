FROM ubuntu:18.04

RUN apt-get update
RUN apt-get install -y locales
RUN apt-get update
RUN apt-get install -y vim curl tmux
RUN apt-get install -y gcc g++

RUN yes | unminimize
RUN locale-gen ja_JP.UTF-8
ENV LANG ja_JP.UTF-8
ENV TZ Asia/Tokyo
WORKDIR /c-study