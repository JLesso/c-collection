# Jose Lesso
# Section 3
# CSC60 Spring 2026
.PHONY: all setup build run clean
all: setup build run
setup:
	@echo Building bin and lib...
	mkdir -p bin lib data
	cp ~/input.dat data/
build:
	@echo Building library...
	make -C src/utils
	@echo Building application...
	make -C src/pestApp
run:
	bin/pestApp data/input.dat
clean:
	@echo cleaning application...
	make -C src/utils clean
	make -C src/pestApp clean
	${RM} bin/pestApp *.o .a 
	rm -rf bin lib data
