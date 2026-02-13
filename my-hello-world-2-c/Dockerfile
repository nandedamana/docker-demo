FROM alpine:3
RUN apk add build-base

COPY hello.c /app/
WORKDIR /app/
RUN cc -o hello hello.c

Entrypoint /app/hello
