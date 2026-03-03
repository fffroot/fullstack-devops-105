CC = gcc
CFLAGS = -Wall -Wextra -Isrc

all: test_program
	./test_program

test_program: src/string_utils.c tests/test_strlen.c
	$(CC) $(CFLAGS) src/string_utils.c tests/test_strlen.c -o test_program

clean:
	rm -f test_program

.PHONY: all clean
