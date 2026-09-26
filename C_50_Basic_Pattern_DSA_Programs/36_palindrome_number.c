#include <stdio.h>
int main() {
  int n, o, r = 0;
  scanf("%d", &n);
  o = n;
  while (n > 0) {
    r = r * 10 + n % 10;
    n /= 10;
  }
  printf("%s", o == r ? "Palindrome" : "Not Palindrome");
  return 0;
}
