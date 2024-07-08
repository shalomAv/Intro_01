// Fix this program so the values of x/y are actually swapped
#include <stdio.h>
int main(int argc, char *argv[]){
  int x;
  x = 42;
  int y = 31;
  x = y;
  y = x;
  printf("x: %d y: %d\n",x,y);
  return x;
}
