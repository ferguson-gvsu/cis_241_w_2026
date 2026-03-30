#include <stdio.h>

int main(){
  int arr[3] = {5, 6, 7};
  int* p = arr;
  p += 2;
  p[-1] = 100;
  for(int i = 0; i < 3; i++){
    printf("Index %d is %d\n", i, arr[i]);
  }
  return 0;

}
