#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  while (b) {
    int t = b;
    b = a % b;
    a = t;
  }
  printf("%d", a);
  return 0;
}
