#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

int main(){
  int length = 10;
  int* a1 = (int*)malloc(sizeof(int) * length);
  int* a2 = (int*)malloc(sizeof(int) * length);
  for(int i = 0; i < length; i++){
    a1[i] = i * i;
  }
  printf("Original arrays:\n");
  PrintArray(a1, length);
  printf("\n");
  PrintArray(a2, length);

  //memset(a1, 1, sizeof(int) * length);
  memcpy(a1 + 1, a1, sizeof(int) * length / 2);
  //memmove(a1 + 1, a1, sizeof(int) * length / 2);
  
  printf("\n\nAfter:\n");
  PrintArray(a1, length);
  printf("\n");
  PrintArray(a2, length);
  free(a1);
  free(a2);
  return 0;
}
