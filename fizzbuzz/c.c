#include <stdio.h>
#define MAX 1000000

int main() {
  int i;
  for (i = 0; i < MAX; i++) {
    if (i % 15 == 0) {
      printf("fizzbuzz\n");
    } else if (i % 3 == 0) {
      printf("fizz\n");
    } else if (i % 5 == 0) {
      printf("buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}
