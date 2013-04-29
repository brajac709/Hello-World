SOURCES := $(wildcard src/*.c)
TARGETS := $(patsubst src/%.c, bin/%, $(SOURCES))

CC = gcc
CFLAGS = -std=c99 -Wall

#all: $(TARGETS)

$(TARGETS):  bin/%: src/%.c
	$(CC) $(CFLAGS) $(SOURCES) -o $@
