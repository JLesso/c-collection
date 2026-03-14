# Jose Lesso
# Section 3
# CSC60 Spring 2026
.PHONY: clean
CC = gcc
CFLAGS = -I../../include
LIB = ../../lib/labUtils.a
labUtils.a : pestUtils.o reportFns.o
	ar rc ${LIB}  $?
pestUtils.o : pestUtils.c
	${CC} ${CFLAGS} -c $? 
reportFns.o : reportFns.c
	${CC} ${CFLAGS} -c $?
clean:
	${RM} ${LIB} *.o 
