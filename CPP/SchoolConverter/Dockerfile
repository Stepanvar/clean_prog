FROM ubuntu:latest
RUN apt-get update && \
	apt-get install -y gcc cmake build-essential libboost-all-dev
ADD . /app/src
WORKDIR /app/build
RUN cmake ../src && \
	cmake --build .
CMD [ "./SchoolConverter" ]