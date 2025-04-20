#include <iostream>
#include <string>
using namespace std;

int main() {
    string login("Regie");
    string inlogin;

    cout << "Enter a login" << endl;
    cin >> inlogin;

    if(login.compare(inlogin) == 0) {
        cout << "Correct login" << endl;
    } else {
        cout << "Incorrect login" << endl;
    }

    return 0;
}

//zav 2
#include <iostream>
#include <string>
using namespace std;

void maskPassword(string& str) {
    size_t pos = str.find("password:");
    while (pos != string::npos) {
        for (size_t i = 0; i < 8 && (pos + 9 + i) < str.length(); ++i) {
            str[pos + 9 + i] = '*';
        }
        pos = str.find("password:", pos + 9); 
    }
}

int main() {
    string login("Regie");
    string inlogin;

    cout << "Enter a login" << endl;
    cin >> inlogin;

    if(login.compare(inlogin) == 0) {
        cout << "Correct login" << endl;
        string input;
        cout << "Enter a string: ";
        cin.ignore(); 
        getline(cin, input);

        maskPassword(input);

        cout << "Modified string: " << input << endl;
    } else {
        cout << "Incorrect login" << endl;
    }

    return 0;
}

