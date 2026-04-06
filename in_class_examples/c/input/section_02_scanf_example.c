#include <stdio.h>
#include <stdlib.h>

void PrintArray(int* p, int length){
  printf("[ ");
  for(int i = 0; i < length; i++){
    printf("%d ", p[i]);
  }
  printf("]\n");
}


int main(){
  int array_size = 4;
  int cur_idx = 0;
  int* values = (int*)malloc(sizeof(int) * array_size);
  while(1){
    int user_value;
    int result = scanf("%d", &user_value);
    if(result == EOF) break;
    printf("Received value: %d\n", user_value);
    values[cur_idx] = user_value;
    cur_idx++;
    if(cur_idx >= array_size){
      array_size *= 2;
      values = realloc(values, array_size * sizeof(int));
    }
    printf("Printing based on index:\n");
    PrintArray(values, cur_idx);
    printf("Printing based on size:\n");
    PrintArray(values, array_size);
  }
  free(values);
  return 0;
}
