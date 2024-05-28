#include <iostream>
#include <string>

using namespace std;


int main(){
  //create variables
  string myName = "Milo";
  int myAge = 32;
  int* pointerToAge = &myAge;

  cout << myName << " " << myAge << " " << pointerToAge << " " << *pointerToAge;
}
