#include <limits.h>
int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  int m = INT_MIN, s = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > m) {
      s = m;
      m = a[i];
    } else if (a[i] > s && a[i] != m)
      s = a[i];
  }
  printf("%d", s);
  return 0;
}
