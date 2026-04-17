#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

int main(){
  //int length = 100;
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
  int offset = 2;
  memcpy(a1 + offset, a1, sizeof(int) * (length - offset));
  printf("\n\nAfter:\n");
  PrintArray(a1, length);
  printf("\n");
  PrintArray(a2, length);
  free(a1);
  free(a2);
  return 0;
}
