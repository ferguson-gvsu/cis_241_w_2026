#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char s1[] = "hello";
  char s2[] = "there";
  char s3[] = "world";
  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: %s\n", s3);
  strcat(s1, s3);
  printf("s1 (after): %s\n", s1);
  //printf("s2: %s\n", s2);
  //printf("s3: %s\n", s3);
  //
  char* big_str = (char*)malloc(100);
  //strncpy(big_str, "hello", 100);
  //printf("%s\n", big_str);
  //strcat(big_str, " there");
  //printf("%s\n", big_str);
  //char* end = strchr(big_str, '\0');
  //float res = 3.14 * 12;
  //sprintf(end, " 12 * pi is: %f", res);
  //printf("%s\n", big_str);
  //char * r = strchr(big_str, 'r');
  //r[0] = 'R';
  //printf("%s\n", big_str);
  //char * e1 = strchr(big_str, 'e');
  ////e1[0] = '3';
  //printf("%s\n", big_str);
  //char * e2 = strchr(e1 + 1, 'e');
  //e2[0] = '3';
  //printf("%s\n", big_str);
  free(big_str);
}
