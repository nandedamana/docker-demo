all: hello

hello: hello.c
	$(CC) -o "$@" -Wall $$(pkg-config --cflags gtk+-3.0) "$<" $$(pkg-config --libs gtk+-3.0)
