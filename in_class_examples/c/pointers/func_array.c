#include <stdio.h>

void PrintArray(int* arr, int len){
  printf("[");
  int i = 0;
  for(i = 0; i < len; i++){
    printf(" %d", arr[i]);
  }
  printf(" ]\n");
}

int main(){
  int my_array[4] = {6, 1, 2, 3};
  PrintArray(my_array, 4);
  return 0;
}
