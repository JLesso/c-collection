/*
    Jose Lesso
    Section 3
    CSC60 Spring 2026
*/
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void generateReport(){
    FILE* reportfile = fopen(REPORT_FILE, "w");
    fprintf(reportfile, "Pest Observation Report\n");
    fprintf(reportfile, "The breakdown of pests observed:\n");
    fprintf(reportfile, "Level 1 pests count - %4d\n", level1counter);
    fprintf(reportfile, "Level 2 pests count - %4d\n", level2counter);
    fprintf(reportfile, "Level 3 pests count - %4d\n", level3counter);
    fclose(reportfile);
}
