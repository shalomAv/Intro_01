// swap_pointer.c: swaps values using a function with pointer arguments.

#include <stdio.h>                // declare existence printf()
void swap_ptr(int *a, int *b);    // function exists, defined below main

int main(int argc, char *argv[]){ // ENTRY POINT: start executing in main()
  int x = 42;                   
  int y = 31;                   
  swap_ptr(&x, &y);               // call swap() with addresses of x/y
  printf("%d %d\n",x,y);          // print the values of x and y
  return 0;                     
}

// Function to swap contents of two memory cells
void swap_ptr(int *a, int *b){    // a/b are addresses of memory cells
  int tmp = *a;                   // go to address a, copy value int tmp
  *a = *b;                        // copy val at addr in b to addr in a
  *b = tmp;                       // copy temp into address in b
  return;
}
