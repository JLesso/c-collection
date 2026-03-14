/*
  Jose Lesso
  Section 3
  CSC60 Spring 2026
*/
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(int argc, char *argv[])
{
  
  if(argc != 2){
   fprintf(stderr,"Usage: %s <file> \n", argv[0]);
    return EXIT_FAILURE;
  }
  processFile(argv[1]);
  generateReport();
  return EXIT_SUCCESS;
}

