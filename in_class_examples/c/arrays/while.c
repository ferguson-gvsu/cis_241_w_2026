#include <stdio.h>

int main(){
  int i = 10;
  while(i >= 0){
    printf("i = %d\n", i);
    i--;
  }
  
  for(int idx = 0; idx < 10; idx++){
    printf("idx = %d\n", idx);
  }

  int length = 4;
  double grades[length];// = {100, 90.5, 80, 20};
  grades[0] = 100;
  grades[1] = 90.5;
  grades[2] = 80;
  grades[3] = 20;
  for(int index = 0; index < length; index++){
    printf("Index %d = %f\n", index, grades[index]);
  }





















  /*
  double grades[4] = {100, 90.2, 85, 20};
  printf("size of one double: %lu\n", sizeof(double)); 
  printf("size of array: %lu\n", sizeof(grades)); 
  for(int j = 0; j < 4; j++){
    printf("Index %d holds %0.2f\n", j, grades[j]);
  }
  int length = 10;
  char buffer[length];
  for(int k = 0; k < 4; k++){
    printf("Index %d holds %d\n", k, buffer[k]);
  }
  */
  return 0;
}
