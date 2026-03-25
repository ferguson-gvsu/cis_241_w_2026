#include <stdio.h>

int main(){
  unsigned int y = -5;
  printf("y is %d\n", y);
  char c = 127;
  printf("c is originally %d\n", c);
  printf("c + 1 is %d\n", c + 1);
  c = c + 1;
  printf("c is now %d\n", c);
  unsigned char c2 = 255;
  printf("c2 is %u\n", c2);
  c2++;
  printf("c2 is %u\n", c2);
  printf("result is %f\n", 3 / 2.0);
  return 0;
}
