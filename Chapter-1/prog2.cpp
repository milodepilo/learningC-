#include <iostream>
using namespace std;

void print(string input) { cout << input << endl; }
void print(int input) { cout << input << endl; }

void multiplyInput(int x, int y) {
  cout << endl << "result of multiplication = " << x * y << endl;
}

int sum(int val1, int val2) {
  int sum = 0;
  while (val1 <= val2) {
    sum += val1;
    ++val1;
  }
  return sum;
}

int sumFor() {
  int sum = 0;
  for (int x = 50; x <= 100; ++x) {
    sum += x;
  }
  return sum;
}

void decrement(int val1, int val2) {
  while (val1 >= val2) {
    print(val1);
    --val1;
  }
}

void decrementFor() {
  for (int x = 10; x >= 0; --x) {
    print(x);
  }
}

void increment(int val1, int val2) {
  while (val1 <= val2) {
    print(val1);
    ++val1;
  }
}

void printRange(int val1, int val2) {
  if (val1 < val2) {
    increment(val1, val2);
  } else {
    decrement(val1, val2);
  }
}

void printSet() {
  int val, sum = 0;
  while (cin >> val) {
    sum += val;
  }
  print(sum);
}

int main() {
  printSet();
  return 1;
}
