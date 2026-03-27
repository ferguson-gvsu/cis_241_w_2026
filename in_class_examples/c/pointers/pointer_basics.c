#include <stdio.h>

int main(){
  int age = 72;
  int* ptr = &age;
  printf("The pointer holds: %p\n", ptr);
  printf("The value its pointing at is: %d\n", *ptr);

  float pi = 3.14;
  float* pi_ptr = &pi;
  printf("The pointer holds: %p\n", pi_ptr);
  printf("The value its pointing at is: %f\n", *pi_ptr);

  ptr++;
  printf("The pointer holds: %p\n", ptr);
  *ptr++;
  printf("pi The value its pointing at is: %f\n", *pi_ptr);
  printf("ptr The value its pointing at is: %d\n", *ptr);
  return 0;
}
