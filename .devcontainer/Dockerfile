# Use the official Ubuntu base image
FROM ubuntu:20.04

# Install essential packages
RUN apt-get update && apt-get install -y \
    build-essential \
    git \
    wget \
    cmake \
    xorg-dev \
    libgl1-mesa-dev \
    libglu1-mesa-dev \
    mingw-w64

# Install GLFW
RUN git clone https://github.com/glfw/glfw.git && \
    cd glfw && \
    cmake -B build -S . -DBUILD_SHARED_LIBS=ON && \
    cmake --build build && \
    cmake --install build && \
    cd .. && \
    rm -rf glfw

# Install GLAD
RUN git clone https://github.com/Dav1dde/glad.git && \
    cd glad && \
    cmake -B build -S . && \
    cmake --build build && \
    cmake --install build && \
    cd .. && \
    rm -rf glad

# Create a non-root user to use the container
RUN useradd -m vscode
USER vscode
WORKDIR /home/vscode

# Set up environment variables
ENV PATH="/usr/local/bin:${PATH}"
