#include <stdio.h>
#include <stdlib.h>

int main(){
  void* p = malloc(20 * sizeof(char));
  char* char_p = (char*)p;

  printf("Before\n");
  printf("Index 0 is %c\n", char_p[0]);
  printf("Index 1 is %c\n", char_p[1]);
  printf("Index 0 is %d\n", char_p[0]);
  printf("Index 1 is %d\n", char_p[1]);
  char_p[0] = 'a';
  char_p[1] = 'b';
  printf("After\n");
  printf("Index 0 is %c\n", char_p[0]);
  printf("Index 1 is %c\n", char_p[1]);
  printf("Index 0 is %d\n", char_p[0]);
  printf("Index 1 is %d\n", char_p[1]);
  free(char_p);
  return 0;
}
