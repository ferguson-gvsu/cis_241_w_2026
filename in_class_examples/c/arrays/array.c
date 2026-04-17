#include "array.h"

void PrintArray(int* p, int length){
  printf("[ ");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]);
  }
  printf("]\n");
}
