FROM alpine:3

# You can install both packages using a single command, but splitting
# improves the chance of cache utilization when you want to add/remove
# a package.
RUN apk add build-base
RUN apk add gtk+3.0-dev

WORKDIR /app/
CMD make
