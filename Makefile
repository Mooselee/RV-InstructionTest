CFLAGS = -g -Wall
all:   instruction-fire.c operands.c
	gcc ${CFLAGS} $^ -o instruction-fire
	./instruction-fire
clean:
	rm instruction-fire
	rm ./asm_test/*.S
