// pointer_examples.c: Demonstrates some common patterns and errors
// for use of pointer assignments and dereferencing.
//
// NOTE: this program will issue warnings when compiled as it contains
// intentional mistakes which are marked with ERROR. It is provided as
// a syntax reference.
int main() {
  // 1: proper pointer assignment
  int  a1 = 11;
  int *p1 = &a1;   // cool
  int  b1 = 55;
  p1 = &b1;        // cool

  // 2: improper pointer assignment
  int  a2 = 13;
  int *p2 = a2;    // ERROR

  // 3: proper pointer copying
  int  a3 = 15;
  int *p3 = &a3;
  int *q3 = p3;    // cool

  // 4: proper pointer deref
  int  a4 = 17;
  int *p4 = &a4;
  int  b4 = *p4;   // cool

  // 5: improper int assign (no deref)
  int  a5 = 19;
  int *p5 = &a5;
  int  b5 = p5;    // ERROR
  
  // 6: improper double indirection
  int  a6 = 21;
  int *p6 = &a6;
  int *q6 = &p6;   // ERROR

  // 7: proper double indirection
  int   a7 = 23;
  int  *p7 = &a7;
  int **d7 = &p7;  // cool
  int  *q7 = *d7;
  int   b7 = *q7;
  int   c7 = **d7;

  return 0;
}
