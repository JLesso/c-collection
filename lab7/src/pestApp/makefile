# Jose Lesso
# Section 3
# CSC60 Spring 2026
.PHONY: clean
CC = gcc
CFLAGS = -I../../include
LIB = ../../lib/labUtils.a
OT = ../../bin/pestApp

pestApp: pestApp.o ${LIB}
	${CC} -o ${OT} $?
pestApp.o : pestApp.c
	${CC} ${CFLAGS} -c $^
clean:
	${RM} ${OT} *.o
