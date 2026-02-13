# Building a C Program and Obtaining the Binary

Professional-grade software is often built in an isolated and
reproducible environment. In this example, we will build our Hello
World program using Docker, and instead of running it inside the
container, we will take it out for "distribution".

This time, no compilation is happening as part of the image build
process. We set up the build environment during image building (by
installing GCC and some libraries), and later run a container to
compile our C program.

The program uses GTK for GUI, just to demonstrate how we handle
dependencies.

First get the image built:

```
docker build -t my-hello-world-c-takeout .
```

Our program, which resides in the `src` directory, is not copied into
the container image. The image merely contains the build environment
that we want. We'll pass the source files while running the
container. One benefit of this approach is that we wouldn't be
rebuilding the Docker image each time we change the source code of our
program.

First let's try running the build container using this command (maybe
first do an `ls src` to figure out what's already there in the source
directory, before executing this command):

```
docker run --volume "$(pwd)"/src:/app --rm my-hello-world-c-takeout
```

You can see the compilation happening, and once done, the executable
file `hello` will be present inside `src`. You can execute it on your
host OS using `src/hello`.

(NOTE: In real projects, you can omit the `--rm` option in the `docker
run` command because it is useful to keep the container around when
you want to frequently update and rebuild the project.)