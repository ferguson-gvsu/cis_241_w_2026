#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[3] = {10, 20, 30};
  for(int i = 0; i < 40; i++){
    if(arr[i] < 0){
      printf("Index %d is %d\n", i, arr[i]);
    }
  }
  return 0;
}
