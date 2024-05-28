#include <iostream>
#include <string>

using namespace std;

class Person {
 public:
  int age;
  string name;

 public:
  Person(int PersonAge, string PersonName) {
    age = PersonAge;
    name = PersonName;
  };

 public:
  void Display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  };
};

int main() {
  Person milo(32, "Milo");
  milo.Display();
  return 0;
}
