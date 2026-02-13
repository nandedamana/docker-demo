# My Hello World Using the Shell

We saw that `docker run --rm hello-world` runs the `hello-world` image
that is available on DockerHub. Now let's create our own Hello World
image using Docker.

To build and run this image, run:

```
docker build -t my-hello-world-shell .
docker run --rm my-hello-world-shell
```