FROM --platform=linux/x86_64 ubuntu:20.04

RUN apt-get update
RUN apt-get install -y locales
RUN apt-get update
RUN apt-get install -y vim curl tmux
RUN apt-get install -y gcc g++

RUN yes | unminimize
RUN locale-gen ja_JP.UTF-8

# 
# env
# 
ENV LANG=ja_JP.UTF-8
ENV TZ=Asia/Tokyo
ENV HOME=/home

WORKDIR $HOME/c-study