#include <stdio.h>
#include <stdlib.h>

void DoStuff(int size){
  float* mem = (float*)malloc(sizeof(float) * size);
  if((unsigned long)mem % 11 != 0){
    free(mem);
  }
}

int main(){
  for(int i = 1; i < 100; i++){
    DoStuff(i);
  }
}
