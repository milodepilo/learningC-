#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
  Sales_Data data1, data2;
  double price = 0;
  std::cin >> data1.bookno >> data1.units_sold >> price;
  data1.revenue = data1.units_sold * price;
  std::cout << "revenue book1: " << data1.revenue << std::endl;
  std::cin >> data2.bookno >> data2.units_sold >> price;
  data2.revenue = data2.units_sold * price;
  std::cout << "revenue book2: " << data1.revenue << std::endl;

  if (data1.bookno == data2.bookno) {
    unsigned totalCnt = data1.units_sold + data2.units_sold;
    double totalRevenue = data1.revenue + data2.revenue;
    std::cout << data1.bookno << " " << totalCnt << " " << totalRevenue
              << std::endl;
  }
}
