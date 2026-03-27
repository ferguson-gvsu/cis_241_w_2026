#include <stdio.h>

int main(){
  double arr[3] = {3.3, 1.0, 1.23456789};
  arr[0] = 2;
  arr[2] = 11 / 2;
  printf("Index 0 is: %f\n", arr[0]);
  printf("Index 1 is: %f\n", arr[1]);
  printf("Index 2 is: %f\n", arr[2]);
  return 0;
}
