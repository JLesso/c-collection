/*
    Jose Lesso
    Section 3
    CSC60 Spring 2026
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "utils.h"

int level1counter;
int level2counter;
int level3counter;


int getPestLevel(pest_t n) {
        switch (n) {
                case aphid:
                case whitefly:
                case cutworm:     return 1;
                case scale:
                case caterpillar:
                case beetle:
                case slug:        return 2;
                case gopher:
                case racoon:
                case possum:      return 3;
        }
        return 0;
}


void processFile(char *f) {
        int inFile = open(f, O_RDONLY);
        if (inFile == -1) {
                perror("open");
        }
        int n;
        while (read(inFile, &n, sizeof(n)) > 0) {
                int level = getPestLevel(n);
                switch (level) {
                        case 1: level1counter++;
                                break;
                        case 2: level2counter++;
                                break;
                        case 3: level3counter++;
                                break;
                }
        }
        close(inFile);
}
