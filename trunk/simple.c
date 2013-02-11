#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long

long c;
long a;

void zz(long t, long t2) {
  a = t + t2;
}

void main() {
  long b;
  a = 25733;
  b = 34567;
  c = 0;

  if (a>=b) {
    c = 1;
  }

  while(c<10) {
    c=c+1;
  }

  c = 4;
  b = c % 3;

  WriteLong(a);
  WriteLine();
  WriteLong(b);
  WriteLine();
  WriteLong(c);
  WriteLine();
}
