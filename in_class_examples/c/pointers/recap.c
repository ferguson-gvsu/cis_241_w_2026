#include <stdio.h>

int main(){
  int i = 100;   //#0
  int j = 500;
  printf("Address of i is: %p\n", &i);
  int* p = &i;   //#1
  printf("After 1: i = %d, p = %p, *p = %d\n", i, p, *p);

  i = i + 5;     //#2
  printf("After 2: i = %d, p = %p, *p = %d\n", i, p, *p);
  *p += 6;       //#3
  printf("After 3: i = %d, p = %p, *p = %d\n", i, p, *p);

  p += 1;        //#4
  printf("After 4: i = %d, p = %p, *p = %d\n", i, p, *p);
  i--;           //#5
  printf("After 5: i = %d, p = %p, *p = %d\n", i, p, *p);
  *p = *p * 2;   //#6
  printf("After 6: i = %d, p = %p, *p = %d\n", i, p, *p);

  p--;           //#7
  printf("After 7: i = %d, p = %p, *p = %d\n", i, p, *p);
  *p = 0;        //#8
  printf("After 8: i = %d, p = %p, *p = %d\n", i, p, *p);

}
