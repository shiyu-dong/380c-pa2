#include <stdio.h>
#define WriteLine() printf("\n");
#define WriteLong(x) printf(" %lld", x);
#define ReadLong(a) if (fscanf(stdin, "%lld", &a) != 1) a = 0;
#define long long long


long b;

struct A {
  long c;
  long d[10];
} e;

void main() {
  long a;

  ReadLong(a);
  ReadLong(b);
  ReadLong(e.d[5]);
  ReadLong(e.c);
  WriteLong(a);
  WriteLong(b);
  WriteLong(e.d[4]);
  WriteLong(e.d[5]);
  WriteLong(e.d[6]);
  WriteLong(e.c);
  WriteLine();
  
}
