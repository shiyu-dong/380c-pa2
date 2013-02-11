#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long

long c;
long a[10];

struct S {
  long t;
} z;

void main() {
  long b;
  long d;
  b = 34567;
  c = 0;

  while(c<10) {
    a[c] = c*333%11;
    c=c+1;
  }

  c = 0;
  while(c<10) {
    WriteLong(a[c]);
    c = c+1;
  }
  WriteLine();

  b = 9;
  while(b > 0) {
    c = 9;
    while(c>=1) {
      if (a[c-1] > a[c]) {
        WriteLong(a[c-1]);
        WriteLong(a[c]);
        WriteLine();
        b = a[c-1];
        a[c-1] = a[c];
        a[c] = b;
      }
      c = c-1;
    }
    b = b - 1;
  }

  c = 0;
  while(c<10) {
    WriteLong(a[c]);
    c = c+1;
  }
  WriteLine();
}
