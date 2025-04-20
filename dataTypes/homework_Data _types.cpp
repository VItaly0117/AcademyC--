//zav_1
#include <iostream>
 
int main() {
  double R1, R2, R3, R0;
  std::cout << "Введіть значення R1: ";
  std::cin >> R1;
  std::cout << "Введіть значення R2: ";
  std::cin >> R2;
  std::cout << "Введіть значення R3: ";
  std::cin >> R3;
  R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
  std::cout << "Опір R0: " << R0 << " Ом" << std::endl;
 
  return 0;
}
//zav_2
#include <iostream>
#include <cmath>
 
int main() {
  double L, R, S;
  const double PI = 3.14;
   std::cout << "Введіть довжину окружності L: ";
  std::cin >> L;
  R = L / (2 * PI);
  S = PI * R * R;
 
  std::cout << "Площа кола S: " << S << " м^2" << std::endl;
 
  return 0;
}
//zav_3
#include <iostream>
int main() {
  double v, t, a, S;
  std::cout << "Введіть швидкість v: ";
  std::cin >> v;
  std::cout << "Введіть час t: ";
  std::cin >> t;
  std::cout << "Введіть прискорення a: ";
  std::cin >> a;
  S = v * t + (a * t * t) / 2;
  std::cout << "Пройдена відстань S: " << S << " м" << std::endl;
  return 0;
}
