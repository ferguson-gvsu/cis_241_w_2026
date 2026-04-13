#include <stdio.h>
#include <stdlib.h>

int main(){
  //int* vals = (int*)malloc(sizeof(int) * 10);
  int vals[10];
  int sum = 0;
  for(int i = 0; i < 10000; i++){
    if(vals[i] < 0){
      vals[i] = 0;
    }
    sum += vals[i];
  }
  printf("Sum is %d\n", sum);
  return 0;
}
