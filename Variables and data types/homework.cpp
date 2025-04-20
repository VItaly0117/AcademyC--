//zav_1
#include <iostream>
int main() {
  double distance, timeInHours, timeInMinutes, timeInSeconds, speed;
  std::cout << "Введіть відстань до аеропорту (км): ";
  std::cin >> distance;
  std::cout << "Введіть час, за який потрібно доїхати (год:хв:сек): ";
  std::cin >> timeInHours >> timeInMinutes >> timeInSeconds;
  timeInSeconds += timeInMinutes * 60 + timeInHours * 3600;
  speed = distance / timeInSeconds * 3.6;
  std::cout << "Швидкість, з якою вам потрібно їхати: " << speed << " км/год" << std::endl;
  return 0;
}
//zav_2
#include <iostream>
int main() {
  int startHour, startMinute, startSecond, endHour, endMinute, endSecond, durationInSeconds, cost;
  const int costPerMinute = 2;
  std::cout << "Введіть час початку оренди (год:хв:сек): ";
  std::cin >> startHour >> startMinute >> startSecond;
  std::cout << "Введіть час завершення оренди (год:хв:сек): ";
  std::cin >> endHour >> endMinute >> endSecond;
  durationInSeconds = (endHour - startHour) * 3600 + (endMinute - startMinute) * 60 + endSecond - startSecond;
  cost = durationInSeconds * costPerMinute;
  std::cout << "Вартість подорожі: " << cost << " грн" << std::endl;
  return 0;
}
//zav_3
#include <iostream>
int main() {
  double distance, fuelCon, priceA, priceB, priceC;
  std::cout << "Введіть відстань, яку треба проїхати (км): ";
  std::cin >> distance;
  std::cout << "Введіть витрату бензину на 100 км: ";
  std::cin >> fuelCon;
  std::cout << "Введіть ціну бензину А (грн/л): ";
  std::cin >> priceA;
  std::cout << "Введіть ціну бензину B (грн/л): ";
  std::cin >> priceB;
  std::cout << "Введіть ціну бензину C (грн/л): ";
  std::cin >> priceC;
  double fuelCostA = (distance * fuelCon / 100) * priceA;
  double fuelCostB = (distance * fuelCon / 100) * priceB;
  double fuelCostC = (distance * fuelCon / 100) * priceC;
  std::cout << "Вид бензину" << "\t" << "Вартість подорожі (грн)" << std::endl;
  std::cout << "----------" << "\t" << "-----------------------" << std::endl;
  std::cout << "A" << "\t\t" << fuelCostA << std::endl;
  std::cout << "B" << "\t\t" << fuelCostB << std::endl;
  std::cout << "C" << "\t\t" << fuelCostC << std::endl;
  return 0;
}
