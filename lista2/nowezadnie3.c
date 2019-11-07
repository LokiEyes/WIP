#include <stdio.h>

int main(void) {
  int n = 0;
  float suma = 0;

  while (suma <= 10)
    suma += 1.0/++n;
  printf("%d\n", n);

  return 0;
}
