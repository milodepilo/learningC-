#include <iostream>
#include <string>

struct Excercise {
  std::string target_muscle;
  std::string name;
};

Excercise create_excercise(const std::string& t_muscle = "",
                           const std::string& name = "") {
  Excercise ex;
  ex.target_muscle = t_muscle;
  ex.name = name;
  return ex;
};

void rename_excercise(Excercise& ex, std::string new_name) {
  ex.name = new_name;
};

struct sales_data {
  std::string bookNo;
  unsigned uints_sold;
  double revenue = 0.0;
};

int main() {
  std::cout << "name of the exercise: " << std::endl;
  std::string ex_name;
  std::cin >> ex_name;
  std::cout << "which muscle does it train?" << std::endl;
  std::string ex_target_muscle;
  std::cin >> ex_target_muscle;
  Excercise new_ex = create_excercise(ex_target_muscle, ex_name);
  std::cout << "excercise created: " << new_ex.name << std::endl;
  std::cout << "rename excercise: " << std::endl;
  std::string n_name;
  std::cin >> n_name;
  rename_excercise(new_ex, n_name);
  std::cout << new_ex.name << std::endl;
  return 0;
}
