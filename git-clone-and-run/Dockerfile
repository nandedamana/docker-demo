FROM golang:1.26

RUN git clone https://github.com/golang/example.git /go-examples
WORKDIR /go-examples/helloserver
RUN go build

CMD ./helloserver -addr :8080
