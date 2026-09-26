#include <stdio.h>
int main() {
  int a, b, x, y;
  scanf("%d %d", &a, &b);
  x = a;
  y = b;
  while (y) {
    int t = y;
    y = x % y;
    x = t;
  }
  printf("%d", (a * b) / x);
  return 0;
}
