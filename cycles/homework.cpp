Завдання 1
#include <iostream>
using namespace std;
 
int main() {
    int choice = 0;
 
    while (choice != 2) {
        cout << "Menu:" << endl;
        cout << "1. Determine the number of digits, their sum and arithmetic mean" << endl;
        cout << "2. Exit the program" << endl;
        cout << "Select an option: ";
        cin >> choice;
 
        if (choice == 1) {
            int number, digitCount = 0, sum = 0, zeroCount = 0;
            cout << "Enter the number: ";
            cin >> number;
 
            int temp = number;
            while(temp != 0) {
                int digit = temp % 10;
                if (digit == 0)
                    zeroCount++;
                sum += digit;
                digitCount++;
                temp /= 10;
            }
 
            cout << "The number of digits: " << digitCount << endl;
            cout << "Sum of digits: " << sum << endl;
            cout << "Arithmetic mean: " << (double)sum / digitCount << endl;
            cout << "The number of zeros: " << zeroCount << endl;
        } else if (choice == 2) {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Wrong choice. Please try again." << endl;
        }
    }
 
    return 0;
}


Завдання 2
#include <iostream>
using namespace std;
 
int main() {
    int choice = 0;
 
    while (choice != 2) {
        cout << "Menu:" << endl;
        cout << "1. Display a chessboard with a given cell size" << endl;
        cout << "2. Exit the program" << endl;
        cout << "Select an option: ";
        cin >> choice;
 
        if (choice == 1) {
            int size;
            cout << "Enter the size of the cell: ";
            cin >> size;
 
            for (int i = 0; i < 8 * size; ++i) {
                for (int j = 0; j < 8 * size; ++j) {
                    if ((i / size + j / size) % 2 == 0)
                        cout << "* ";
                    else
                        cout << "- ";
                }
                cout << endl;
            }
        } else if (choice == 2) {
            cout << "Goodbye!" << endl;
        } else {
            cout << "Wrong choice. Please try again." << endl;
        }
    }
 
    return 0;
}

