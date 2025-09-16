
FROM ubuntu:18.04

# Set environment variables to avoid interactive prompts during package installation
ENV DEBIAN_FRONTEND=noninteractive

# Update and install essential packages
RUN apt-get update && \
    apt-get install -y build-essential git nano automake libncurses5-dev texinfo qemu libvirt-bin perl wget && \
    apt-get insall cgdb ctags cscope NERDTree YouCompleteMe && \
    apt-get clean && \
    rm -rf /var/lib/apt/lists/*



RUN export PATH=/home/pintos/setup/x86_64/bin:$PATH

# Set working directory
WORKDIR /home/pintos

# Default command
CMD ["/bin/bash"]