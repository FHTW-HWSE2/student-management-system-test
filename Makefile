CC = gcc
CFLAGS = -Wall -Werror -g -pedantic -Wno-unused-parameter
TARGET = build/main

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,build/%.o,$(SRCS))

all: build $(TARGET)

build:
	mkdir -p build

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

build/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build

.PHONY: all clean build