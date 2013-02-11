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
  
  a = 11;
  b = 7;

  if (a > b) {
    c = 7;
  }
  else {
    c = 0;
  }
  if (c >= b) {
    d = 11;
  }
  else {
    d = 0;
  }
  if (d <= a) {
    c = 5;
  }
  else {
    c = 10;
  }
  if (c < b) {
    d = -1;
  }
  else {
    d = 1;
  }
  if (d != a) {
    c = b;
  }
  else {
    c = -1;  
  }
  if (c == b) {
    d = 100;
  }
  else {
    d = -100;
  }



  WriteLong(d);
  WriteLine();

//output: 100


}
