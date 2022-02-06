FROM stdc:latest
COPY . /app
WORKDIR /app
CMD make re && valgrind ./leak.out