#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int main(){
  for (int i = 1; i < 5000; i++){
    printf("The %d prime number is: %d\n", i, sieve(i));
  }
  return 0;
}
