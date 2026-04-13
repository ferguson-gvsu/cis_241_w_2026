#include <stdio.h>
#include <stdlib.h>

void funcB(int N){
  //int* vals = (int*)malloc(sizeof(int) * 10);
  int vals[10];
  int sum = 0;
  for(int i = 0; i < 10000; i++){
    sum += vals[i];
  }
  printf("Sum is %d\n", sum);
}

void funcA(int val){
  if(val % 2 != 0){
    funcB(val);
  }
}

int main(){
  for(int i = 0; i < 10000; i++){
    funcA(i);
  }
  return 0;
}
