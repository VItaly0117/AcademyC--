//завдання 1
#include <iostream>
int main() {
  int seconds;
  int hours, minutes, remSec;
  std::cout << "Введіть час у секундах: ";
  std::cin >> seconds;
  hours = seconds / 3600;
  remSec = seconds % 3600;
  minutes = remSec / 60;
  remSec %= 60;
  std::cout << hours << " год " << minutes << " хв " << remSec << " сек" << std::endl;
  return 0;
}

//Завдання 2
#include <iostream>
int main() {
  double number;
  int hryvnia, kopiyky;
  std::cout << "Введіть дробове число: ";
  std::cin >> number;
  hryvnia = static_cast<int>(number);
  kopiyky = static_cast<int>(round((number - hryvnia) * 100));
  std::cout << hryvnia << " грн " << kopiyky << " коп" << std::endl;
  return 0;
}
//Завдання 4
#include <iostream>

int main() {
  int days, weeks, remDays;

  std::cout << "Введіть кількість днів: ";
  std::cin >> days;
  weeks = days / 7;
  remDays = days % 7;

  std::cout << days << " днів = " << weeks << " тижнів і " << remDays << " днів" << std::endl;
  return 0;
}
