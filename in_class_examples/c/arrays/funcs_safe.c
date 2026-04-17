#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array.h"

int main(){
  int length = 10;
  int* a1 = (int*)malloc(sizeof(int) * length);
  int* a2 = (int*)malloc(sizeof(int) * length);
  printf("Original arrays:\n");
  memset(a1, 0, sizeof(int) * length);
  memset(a2, 1, sizeof(int) * length);
  PrintArray(a1, length);
  PrintArray(a2, length);
  printf("After loop:\n");
  for(int i = 0; i < 10; i++){
    a1[i] = i*i;
  }
  PrintArray(a1, length);
  PrintArray(a2, length);
  printf("After memcpy:\n");
  memcpy(a2, a1, length * sizeof(int));
  PrintArray(a1, length);
  PrintArray(a2, length);
  free(a1);
  free(a2);
  return 0;
}
