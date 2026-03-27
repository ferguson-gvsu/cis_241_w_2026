#include <stdio.h>

int main(){
  int arr[3] = {5, 6, 7};
  int arr2[2] = {10, 11};
  printf("Index 0: %d\n", arr[0]);
  printf("Index 1: %d\n", arr[1]);
  printf("Index 2: %d\n", arr[2]);
  printf("Index 3: %d\n", arr[3]);
  arr[3] = 5;
  printf("Index 3: %d\n", arr[3]);
  return 0;
}
