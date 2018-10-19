#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int * generateArray(int n){
  int size;
  if (n>5000){
    size = (int)(1.15 * n * log(n));
  }
  else{
    size = (int)(1.3 * n * log(n) + 10);
  }
  printf("size: %d\n", size);
  int * arr = (int *)  calloc(1, size); 
  return arr;
}

