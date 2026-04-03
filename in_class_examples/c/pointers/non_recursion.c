#include <stdio.h>

int bar(int i){

}
int foo(int i){
  bar(i + 1);
  bar(2 + i);
}

int main(){
  int x = 0;
  foo(x);
}
