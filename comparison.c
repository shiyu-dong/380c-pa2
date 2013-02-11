#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long



void main() {
  long a;
  long b;
  long c;
  long d;
  long e;
  
  a = -11;
  b = 7;

  if (a > 0) {
    if (a > 20) {
      c = 2;
    }
    else {
      c = 1;
    }

  }
  else {
    if (a < -20) {
      c = -2;
    }
    else  {
      c = -1;
    }
  }



  WriteLong(c);
  WriteLine();

//output: -1


}