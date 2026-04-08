#include <stdio.h>

int main(){
  long long x = 122;
  while(1){
    x++;
    printf("x is %lld\n", x);
    printf("The address of x is %p\n", &x);
    getchar();
  }
  return 0;
}
