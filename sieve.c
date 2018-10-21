#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int size = 0;

char * generateArray(int n){
  if (n>5000){
    size = (int)(1.15 * n * log(n));
  }
  else{
    size = (int)(1.3 * n * log(n) + 10);
  }
  //printf("size: %d\n", size);
  char * arr = (char *)  calloc(1, size);
  //print_arr(arr);
  return arr;
}

void print_arr(char * arr){
  for (int i = 0; i < size; i++){
    printf("%d: %d\n", i, arr[i]);
  }

}

int sieve(int n){
  char * arr = generateArray(n);
  for (int i = 2; i < size; i++){
    if (!arr[i]){
      for (int j = i+i; j < size; j+=i){
	arr[j] = 1;
      }
    }
  }

  for (int i = 2; i < size; i++){
    if (!arr[i]){
      //printf("index is: %d\n", i);
      n--;
    }
    if(!n){
      //print_arr(arr);
      return i;
    }
  }
  return 0;
}
