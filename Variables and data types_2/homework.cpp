/*#include <iostream>

using namespace std;

int main() {
  int secondsSinceMidnight;
  cout << "Enter the time in seconds that has passed since the beginning of the day: ";
  cin >> secondsSinceMidnight;


  int hours = secondsSinceMidnight / 3600;


  int minutes = (secondsSinceMidnight % 3600) / 60;


  int seconds = secondsSinceMidnight % 60;


  cout << "The current time: " << hours << ":" << minutes << ":" << seconds << endl;


  int secondsUntilMidnight = 86400 - secondsSinceMidnight;
  int hoursUntilMidnight = secondsUntilMidnight / 3600;
  int minutesUntilMidnight = (secondsUntilMidnight % 3600) / 60;
  int secondsUntilMidnight2 = secondsUntilMidnight % 60;

  cout << "Time left until midnight: " << hoursUntilMidnight << ":" << minutesUntilMidnight << ":" << secondsUntilMidnight2 << endl;

  return 0;
}*/
/*Завдання 2*/
/*#include <iostream>

using namespace std;

int main() {
  int secondsSinceStartWork;
  cout << "Enter the time in seconds that has passed since the start of the working day: ";
  cin >> secondsSinceStartWork;


  int hoursLeft = 8 - secondsSinceStartWork / 3600;


  cout << "The number of hours left until the end of the working day: " << hoursLeft << endl;

  return 0;
}
*/
/*#include <iostream>

using namespace std;
/*дз 2 завдання 1*/
/*
#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Enter a 6-digit number: ";
  cin >> number;

  if (number < 100000 || number > 999999) {
    cout << "Error! Not a 6-digit number was entered." << endl;
    return 1;
  }
  int sum1 = number / 1000 + (number % 1000) / 100 + (number % 100) / 10;
  int sum2 = number % 10 + (number % 100) / 10 + (number % 1000) / 100;
  if (sum1 == sum2) {
    cout << "The number " << number << " is lucky!" << endl;
  } else {
    cout << "The number " << number << " is not lucky." << endl;
  }

  return 0;
}
*/
/*Дз 2 завдання 2*/
/*#include <iostream>

using namespace std;

int main() {
  int number;
  cout << "Enter a 4-digit number: ";
  cin >> number;

  if (number < 1000 || number > 9999) {
    cout << "Error!" << endl;
    return 1;
  }

  int firstDigit = number / 1000;
  int secondDigit = (number % 1000) / 100;
  int thirdDigit = (number % 100) / 10;
  int fourthDigit = number % 10;

  int swappedNumber = fourthDigit * 1000 + thirdDigit * 100 + secondDigit * 10 + firstDigit;

  cout << "The number with the permuted digits: " << swappedNumber << endl;

  return 0;
}*/
#include <iostream>

int main() {
    int num1, num2, num3, num4, num5, num6, num7;

    std::cout << "Enter 7 integers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;

    int max_num = num1;

    if (num2 > max_num) {
        max_num = num2;
    }
    if (num3 > max_num) {
        max_num = num3;
    }
    if (num4 > max_num) {
        max_num = num4;
    }
    if (num5 > max_num) {
        max_num = num5;
    }
    if (num6 > max_num) {
        max_num = num6;
    }
    if (num7 > max_num) {
        max_num = num7;
    }

    std::cout << "The maximum number: " << max_num << std::endl;

    return 0;
}


