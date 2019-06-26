all: build clean
CFLGAS=-g -O3

build: interface.o tokenizer.o history.o
	cc -o $@ $^

interface.o: interface.c
	cc -c $(cFLAGS) interface.c

tokenizer.o: tokenizer.c tokenizer.h
	cc -c $(cFLAGS) tokenizer.c

history.o: history.c history.h
	cc -c $(cFLAGS) history.c

clean:
	rm -f *.o build

