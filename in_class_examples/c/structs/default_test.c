#include <stdio.h>

typedef struct Coord {
  double x;
  double y;
} Coord;

int main(){
  Coord c;
  printf("Coordinate is: (%f, %f)\n", c.x, c.y);
  return 0;
}
