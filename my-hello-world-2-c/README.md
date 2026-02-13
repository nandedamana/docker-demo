# Building and Running a C Program

In the example that used the shell to print a greeting, we didn't have
to build anything (except the Docker image itself). In this example,
we will see how to compile a C program as part of the image building
process. We'll make the newly-built `hello` program the `ENTRYPOINT`,
which means the program will be executed whenever we run the image as
a container. Note that compiling the C program happens only during the
image creation, not every time you spawn a container.

To build and run this image, run:

```
docker build -t my-hello-world-c .
docker run --rm my-hello-world-c
```