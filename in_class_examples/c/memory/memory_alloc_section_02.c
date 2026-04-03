#include <stdio.h>
#include <stdlib.h>

int main(){
  void* void_p = malloc(20);
  char* char_p = (char*)void_p;
  printf("Before\n");
  printf("Index 0 is %c\n", char_p[0]);
  printf("Index 1 is %c\n", char_p[1]);
  printf("Index 0 is %d\n", char_p[0]);
  printf("Index 1 is %d\n", char_p[1]);
  char_p[0] = 'A';
  char_p[1] = 'b';
  printf("After\n");
  printf("Index 0 is %c\n", char_p[0]);
  printf("Index 1 is %c\n", char_p[1]);
  printf("Index 0 is %d\n", char_p[0]);
  printf("Index 1 is %d\n", char_p[1]);

  printf("void ptr %p\n", void_p);
  printf("void ptr + 1 %p\n", void_p+1);
  printf("size of void_p %lu\n", sizeof(void_p));
  printf("size of char_p %lu\n", sizeof(char_p));
  free(void_p);

  return 0;
}
