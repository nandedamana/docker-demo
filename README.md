# Practical Examples in Docker

Here you can find some sample Docker projects for you to get started.

## Installing Docker

There is an [official installation
guide](https://docs.docker.com/reference/samples/) available on
`docker.com`. For popular GNU/Linux distros, it recommends installing
Docker from the upstream repositories rather than the distro's
repositories. One reason to do this is the Docker packages distributed
by distros are often outdated. However, if the guide looks
intimidating, I recommend you install Docker from the distro's repo
itself, which is going to be easier. You can later remove these
packages if you find yourself in need of the cutting-edge version
later.

The process of installing Docker from your distro's repo looks
somewhat like this (assuming Debian/Ubuntu or the like):

```
sudo apt update
sudo apt install docker.io
```

Confirm installation by:

```
docker --version
docker run --rm hello-world
```

The first command should print the version of your Docker installation
in a single line. The second command creates a container of the image
`hello-world`, which prints a screenful of greeting.

In case you face any permission issue, add yourself to the `docker`
group by executing the following command and then re-login manually:

```
sudo usermod -aG docker $USER
```

## Useful Links

- [Docker CLI Cheatsheet](https://docs.docker.com/get-started/docker_cheatsheet.pdf)
- [Official Docker Samples Page](https://docs.docker.com/reference/samples/)
