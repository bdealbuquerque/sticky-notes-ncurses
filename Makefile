CC=gcc
CFLAGS=-lncurses
DEPS= snorse.h
OBJ = main.o snorse.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	@rm -f ${EXEC}
