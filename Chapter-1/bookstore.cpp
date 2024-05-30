#include <iostream>

#include "Sales_item.h"

using namespace std;

int main() {
  Sales_item total;
  if (cin >> total) {
    Sales_item transaction;
    while (cin >> transaction) {
      if (total.isbn() == transaction.isbn()) {
        total += transaction;
      } else {
        cout << total << endl;
        total = transaction;
      }
    }
    cout << total << endl;
  } else {
    cerr << "No Data?" << endl;
    return -1;
  }
  return 0;
}
