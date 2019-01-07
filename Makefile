TARGET=kata
KATA=make_it.c
CC=gcc
FLAGS=-g -Wall

INCS=
LIBS=

@all:
	${CC} ${FLAGS} -o ${TARGET} ${KATA}
