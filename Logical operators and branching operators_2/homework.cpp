/*#include <iostream>

int main() {
  int duration, operator_id, target_id, cost;

  std::cout << "duration of the call: ";
  std::cin >> duration;

  std::cout << "your operator:\n";
  std::cout << "1. Kyivstar\n2. Vodafone\n3. Lifecell\n";
  std::cin >> operator_id;

  std::cout << "Select the target operator:\n";
  std::cin >> target_id;

  switch (operator_id) {
    case 1:
      cost = (target_id == 2) ? 50 : 70;
      break;
    case 2:
      cost = (target_id == 1) ? 60 : 80;
      break;
    case 3:
      cost = (target_id == 1) ? 60 : 70;
      break;
    default:
      std::cout << "Incorrect operator selection.\n";
      return 0;
  }

  std::cout << "The cost of the conversation: $" << duration * cost << std::endl;

  return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int desired, lines, num;

    cout << "desired income of Vasily: $";
    cin >> desired;

    cout << "number of lines of code written by Vasily: ";
    cin >> lines;

    cout << "number of tardinesses of Vasily: ";
    cin >> num;


    int codeForIncome = (desired / 50) * 100;
    int maxDelaysForIncome = (desired - (lines / 100) * 50) / 20;


    cout << "You need to write " << codeForIncome << " lines of code to get the desired income." << endl;
    cout << "You can be late a maximum of " << maxDelaysForIncome << " times." << endl;

    int penalty = num > maxDelaysForIncome ? ((num - maxDelaysForIncome) * 20) : 0;
    int totalIncome = desired - penalty;

    cout << "Penalty for delay: $" << penalty << endl;
    if (totalIncome < 0)
        cout << "Vasily will not receive money because of too many delays." << endl;
    else
        cout << "Vasily will get $" << totalIncome << endl;

    return 0;
}

