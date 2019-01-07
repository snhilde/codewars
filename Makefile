TARGET=kata
KATA=array_diff.c
CC=gcc
FLAGS=-g -Wall

INCS = -I /usr/include
LIBS = -L /usr/lib \
	   -l m

@all:
	${CC} ${FLAGS} ${INCS} -o ${TARGET} ${KATA} ${LIBS}
