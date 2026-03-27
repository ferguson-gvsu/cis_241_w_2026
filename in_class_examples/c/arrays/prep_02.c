#include <stdio.h>

int main(){
  double arr[3] = {3.3, 1.0, 1.23456789};
  arr[0] = 'a';
  arr[-1] = 1111.111;
  arr[3] = 5;
  printf("Index -1 is: %f\n", arr[-1]);
  printf("Index 0 is: %f\n", arr[0]);
  printf("Index 1 is: %f\n", arr[1]);
  printf("Index 2 is: %0.10f\n", arr[2]);
  printf("Index 3 is: %f\n", arr[3]);
  return 0;
}
