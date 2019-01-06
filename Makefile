TARGET=kata
KATA=n_divisible.c
CC=gcc
FLAGS=-g -Wall

INCS=
LIBS=

@all:
	${CC} ${FLAGS} -o ${TARGET} ${KATA}
