#include <iostream>

#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item sales[4];
  cin >> sales[0] >> sales[1] >> sales[2] >> sales[3];
  for (int i = 0; i < (sizeof(sales) / sizeof(sales[0])); ++i) {
    cout << sales[i] << endl;
  }
  return 0;
}
