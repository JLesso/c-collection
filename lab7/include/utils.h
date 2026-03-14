/*
 Jose Lesso
 Section 3
 CSC60Spring2026
*/
#ifndef LAB7_H
#define LAB7_H

#define REPORT_FILE "levelCountReport.txt"
typedef enum {aphid, whitefly, scale, caterpillar, beetle, cutworm, slug, gopher, racoon, possum} pest_t;
extern int level1counter; 
extern int level2counter;
extern int level3counter;
void processFile(char *f);
void generateReport();

#endif
