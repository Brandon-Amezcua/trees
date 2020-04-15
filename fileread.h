
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool openfiles(int argc, const char* argv[], FILE** pfin, int* n) {
  if (argc == 0) {
    return false;
  }
  *pfin = fopen(argv[1], "r");
  if (argc == 4) {
    *n = atoi(argv[3]);
  } else {
    *n = 10;
  }
  return true;
}

void closefiles(FILE* pfin) {
  fclose(pfin);
}
