FROM gcc:latest as build
RUN apt-get apt-get update && \
    apt-get install -y \
      libboost-dev libboost-program-options-dev \
      cmake \
    && \
    cmake -DCMAKE_BUILD_TYPE=Release && \
    cmake --build . && \
    mv lib*.a /usr/lib
ADD ./src /app/src
WORKDIR /app/build
RUN cmake ../src && \
    cmake --build .
FROM ubuntu:latest
RUN groupadd -r sample && useradd -r -g sample sample
USER sample
WORKDIR /app
COPY --from=build /app/build/happ .
CMD ["./happ"]