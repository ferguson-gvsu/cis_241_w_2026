#include <stdio.h>

int main(){
  int mat[2][3];
  mat[0][0] = 0;
  mat[0][1] = 1;
  mat[0][2] = 2;
  mat[1][0] = 3;
  mat[1][1] = 4;
  mat[1][2] = 5;
  printf("The number is %d\n", mat[1]);
  return 0;
}
