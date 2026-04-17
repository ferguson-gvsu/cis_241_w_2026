#include <stdio.h>

int main(){
  FILE* fp = fopen("input.txt", "r");
  while(1){
    int num;
    int res = fscanf(fp, "%d", &num);
    if(res != 1) break;
    printf("Read integer: %d\n", num);
  }
  fclose(fp);

  FILE* out_fp = fopen("output.txt", "w");
  if(out_fp == NULL){
    printf("Error opening file!");
    return 1;
  }
  for(int i = 0; i < 10; i++){
    fprintf(out_fp, "%d %d\n", i, i * i);
  }
  fclose(out_fp);
}

