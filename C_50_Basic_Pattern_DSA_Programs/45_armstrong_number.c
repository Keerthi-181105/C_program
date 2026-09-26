#include <stdio.h>
int main() {
  int n, o, d, s = 0;
  scanf("%d", &n);
  o = n;
  while (n) {
    d = n % 10;
    s += d * d * d;
    n /= 10;
  }
  printf("%s", s == o ? "Armstrong" : "Not Armstrong");
  return 0;
}
