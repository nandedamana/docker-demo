# Cloning, Building, and Running an Existing Project

Let's use Git to clone an existing project and then build it and run
it using Docker.

Have a look at the Dockerfile and build it:

```
docker build -t git-clone-and-run .
```

To run the service:

```
docker run --name website-demo -d -p 3000:8080 git-clone-and-run
```

With `-d`, the container runs in the background, allowing you to use
the terminal for other activities or close it altogether, without
disrupting the container.

Now open a web browser and visit `localhost:3000`. You should get a
page saying "Hello, Gopher!"

Compare the Dockerfile, the `docker run` command, and the URL you
visited to find the roles of the port addresses `3000` and `8080`.

Try out the commands `docker stats website-demo` (Ctrl+C to quit) and
`docker logs website-demo`.

You can stop and remove the container by:

```
docker stop website-demo
docker rm website-demo
```