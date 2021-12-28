CC=gcc

all: debug

main: Main.c
	$(CC) -o main Main.c

debug: Main.c
	$(CC) -g -o main Main.c

clean:
	rm main
