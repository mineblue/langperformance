#include <iostream>
#define MAX 1000000
using namespace std;

int main() {
  int i;
  for (i = 0; i < MAX; i++) {
    if (i % 15 == 0) {
      cout << "fizzbuzz" << endl;
    } else if (i % 3 == 0) {
      cout << "fizz" << endl;
    } else if (i % 5 == 0) {
      cout << "buzz" << endl;
    } else {
      cout << i << endl;
    }
  }
  return 0;
}
