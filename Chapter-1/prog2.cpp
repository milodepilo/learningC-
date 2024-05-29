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

void decrement(int val1, int val2) {
  while (val1 >= val2) {
    print(val1);
    --val1;
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

int main() {
  print(sum(50, 100));
  decrement(10, 0);
  int x, y = 0;
  cin >> x >> y;
  printRange(x, y);

  //
  //  int number1, number2 = 0;
  //
  //  cin >> number1 >> number2;
  //
  //  while (number1 == 0 || number2 == 0) {
  //    print("numbers cannot be zero");
  //    cin >> number1 >> number2;
  //  }
  //
  //  multiplyInput(number1, number2);
  return 1;
}
