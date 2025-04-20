// zav 1
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Book {
    string title;
    string author;
    string publisher;
    string genre;
};

void print(Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Книга " << i + 1 << ": " << books[i].title 
             << ", Автор: " << books[i].author 
             << ", Видавництво: " << books[i].publisher 
             << ", Жанр: " << books[i].genre << endl;
    }
}


void searc_author(Book books[], int size, const string &author) {
    bool found = false; 
    for (int i = 0; i < size; ++i) {
        if (books[i].author == author) {
            cout << "Знайдено книгу: " << books[i].title << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Книги автора " << author << " не знайдено." << endl;
    }
}

void searc_title(Book books[], int size, const string &title) {
    bool found = false; 
    for (int i = 0; i < size; ++i) {
        if (books[i].title == title) {
            cout << "Знайдено книгу: " << books[i].title << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Книги з назвою " << title << " не знайдено." << endl;
    }
}

void sort_title(Book books[], int size) {
    sort(books, books + size, [](Book a, Book b) { return a.title < b.title; });
}

void sort_author(Book books[], int size) {
    sort(books, books + size, [](Book a, Book b) { return a.author < b.author; });
}

void sort_pyblisher(Book books[], int size) {
    sort(books, books + size, [](Book a, Book b) { return a.publisher < b.publisher; });
}

int main() {
    const int size = 5;
    Book books[size] = {
        {"Майстер і Маргарита", "Михайло Булгаков", "АСТ", "Класика"},
        {"Злочин і кара", "Федір Достоєвський", "Ексмо", "Роман"},
        {"Війна і мир", "Лев Толстой", "АСТ", "Історичний роман"},
        {"Анна Кареніна", "Лев Толстой", "АСТ", "Класика"},
        {"Сто років самотності", "Габріель Гарсіа Маркес", "Клуб сімейного дозвілля", "Магічний реалізм"}
    };

    int choice;
    do {
        cout << "1. Друк всіх книг\n"
             << "2. Пошук за автором\n"
             << "3. Пошук за назвою\n"
             << "4. Сортування за назвою\n"
             << "5. Сортування за автором\n"
             << "6. Сортування за видавництвом\n"
             << "0. Вихід\n"
             << "Ваш вибір: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                print(books, size);
                break;
            case 2: {
                string author;
                cout << "Введіть автора: ";
                getline(cin, author);
                searc_author(books, size, author);
                break;
            }
            case 3: {
                string title;
                cout << "Введіть назву: ";
                getline(cin, title);
                searc_title(books, size, title);
                break;
            }
            case 4:
                sort_title(books, size);
                cout << "Відсортовано за назвою.\n";
                break;
            case 5:
                sort_author(books, size);
                cout << "Відсортовано за автором.\n";
                break;
            case 6:
                sort_pyblisher(books, size);
                cout << "Відсортовано за видавництвом.\n";
                break;
            case 0:
                cout << "Вихід...\n";
                break;
            default:
                cout << "Невірний вибір.\n";
        }
    } while (choice != 0);

    return 0;
}
//zav2
#include <iostream>
#include <cstring> 

using namespace std;

struct Machine {
    string color;
    string model;
    bool isNumberInt;
    union {
        int numberInt;
        char numberStr[9]; 
    } number;

    Machine(string color, string model, int numberInt) : color(color), model(model), isNumberInt(true) {
        number.numberInt = numberInt;
    }

    Machine(string color, string model, const char* numberStr) : color(color), model(model), isNumberInt(false) {
        strncpy(number.numberStr, numberStr, sizeof(number.numberStr) - 1);
        number.numberStr[sizeof(number.numberStr) - 1] = '\0'; 
    }
    void fill(string color, string model, int numberInt) {
        this->color = color;
        this->model = model;
        isNumberInt = true;
        number.numberInt = numberInt;
    }

    void fill(string color, string model, const char* numberStr) {
        this->color = color;
        this->model = model;
        isNumberInt = false;
        strncpy(number.numberStr, numberStr, sizeof(number.numberStr) - 1);
        number.numberStr[sizeof(number.numberStr) - 1] = '\0'; 
    }

    void print() const {
        cout << "Color: " << color << endl;
        cout << "Model: " << model << endl;
        if (isNumberInt) {
            cout << "Number: " << number.numberInt << endl;
        } else {
            cout << "Number: " << number.numberStr << endl;
        }
    }
};

int main() {
    Machine car1("White", "Audu", 12345);
    car1.print();

    Machine car2("Blue", "Honda", "AB123CD");
    car2.print();

    return 0;
}
za#include <iostream>
#include <string>
using namespace std;

enum Type {
    BIRD,     
    CATTLE,   
    HUMAN     
};


union Characteristic {
    double flightSpeed;    
    bool isEvenToed;       
    int IQ;                
};

struct LivingEntity {
    double speed;   
    Type type;               
    string color; 
    Characteristic characteristic;  

    void input() {
        cout << "Введіть швидкість пересування: ";
        cin >> speed;
        cout << "Введіть колір: ";
        cin >> color;

        cout << "Оберіть тип живої сутності (0 - Птах, 1 - Худоба, 2 - Людина): ";
        int typeInput;
        cin >> typeInput;
        type = static_cast<Type>(typeInput);

        if (type == BIRD) {
            cout << "Введіть швидкість польоту (для птаха): ";
            cin >> characteristic.flightSpeed;
        } else if (type == CATTLE) {
            cout << "Чи є худоба парнокопитною? (1 - Так, 0 - Ні): ";
            cin >> characteristic.isEvenToed;
        } else if (type == HUMAN) {
            cout << "Введіть рівень IQ (для людини): ";
            cin >> characteristic.IQ;
        }
    }

    void print() const {
        cout << "Швидкість пересування: " << speed << " м/с" << endl;
        cout << "Колір: " << color << endl;
        cout << "Тип: ";
        switch (type) {
            case BIRD:
                cout << "Птах" << endl;
                cout << "Швидкість польоту: " << characteristic.flightSpeed << " м/с" << endl;
                break;
            case CATTLE:
                cout << "Худоба" << endl;
                cout << "Парнокопитна: " << (characteristic.isEvenToed ? "Так" : "Ні") << endl;
                break;
            case HUMAN:
                cout << "Людина" << endl;
                cout << "Рівень IQ: " << characteristic.IQ << endl;
                break;
        }
    }
};

void editLivingEntity(LivingEntity& entity) {
    cout << "Редагуємо сутність: " << endl;
    entity.input();
}

void printAllEntities(LivingEntity entities[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Сутність #" << i + 1 << ":" << endl;
        entities[i].print();
        cout << endl;
    }
}

void searchByCharacteristic(LivingEntity entities[], int size, int searchIQ) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (entities[i].type == HUMAN && entities[i].characteristic.IQ == searchIQ) {
            cout << "Знайдено сутність з рівнем IQ " << searchIQ << ":" << endl;
            entities[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "Сутностей з таким рівнем IQ не знайдено." << endl;
    }
}

int main() {
    const int SIZE = 10;
    LivingEntity entities[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Введіть інформацію для сутності #" << i + 1 << ":" << endl;
        entities[i].input();
    }

    cout << "\nУсі сутності:" << endl;
    printAllEntities(entities, SIZE);

    int searchIQ;
    cout << "\nВведіть рівень IQ для пошуку: ";
    cin >> searchIQ;
    searchByCharacteristic(entities, SIZE, searchIQ);

    return 0;
}

#zav3
#include <iostream>
#include <string>
using namespace std;

enum Type {
    BIRD,     
    CATTLE,   
    HUMAN     
};


union Characteristic {
    double flightSpeed;    
    bool isEvenToed;       
    int IQ;                
};

struct LivingEntity {
    double speed;   
    Type type;               
    string color; 
    Characteristic characteristic;  

    void input() {
        cout << "Введіть швидкість пересування: ";
        cin >> speed;
        cout << "Введіть колір: ";
        cin >> color;

        cout << "Оберіть тип живої сутності (0 - Птах, 1 - Худоба, 2 - Людина): ";
        int typeInput;
        cin >> typeInput;
        type = static_cast<Type>(typeInput);

        if (type == BIRD) {
            cout << "Введіть швидкість польоту (для птаха): ";
            cin >> characteristic.flightSpeed;
        } else if (type == CATTLE) {
            cout << "Чи є худоба парнокопитною? (1 - Так, 0 - Ні): ";
            cin >> characteristic.isEvenToed;
        } else if (type == HUMAN) {
            cout << "Введіть рівень IQ (для людини): ";
            cin >> characteristic.IQ;
        }
    }

    void print() const {
        cout << "Швидкість пересування: " << speed << " м/с" << endl;
        cout << "Колір: " << color << endl;
        cout << "Тип: ";
        switch (type) {
            case BIRD:
                cout << "Птах" << endl;
                cout << "Швидкість польоту: " << characteristic.flightSpeed << " м/с" << endl;
                break;
            case CATTLE:
                cout << "Худоба" << endl;
                cout << "Парнокопитна: " << (characteristic.isEvenToed ? "Так" : "Ні") << endl;
                break;
            case HUMAN:
                cout << "Людина" << endl;
                cout << "Рівень IQ: " << characteristic.IQ << endl;
                break;
        }
    }
};

void editLivingEntity(LivingEntity& entity) {
    cout << "Редагуємо сутність: " << endl;
    entity.input();
}

void printAllEntities(LivingEntity entities[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Сутність #" << i + 1 << ":" << endl;
        entities[i].print();
        cout << endl;
    }
}

void searchByCharacteristic(LivingEntity entities[], int size, int searchIQ) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (entities[i].type == HUMAN && entities[i].characteristic.IQ == searchIQ) {
            cout << "Знайдено сутність з рівнем IQ " << searchIQ << ":" << endl;
            entities[i].print();
            found = true;
        }
    }
    if (!found) {
        cout << "Сутностей з таким рівнем IQ не знайдено." << endl;
    }
}

int main() {
    const int SIZE = 10;
    LivingEntity entities[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Введіть інформацію для сутності #" << i + 1 << ":" << endl;
        entities[i].input();
    }

    cout << "\nУсі сутності:" << endl;
    printAllEntities(entities, SIZE);

    int searchIQ;
    cout << "\nВведіть рівень IQ для пошуку: ";
    cin >> searchIQ;
    searchByCharacteristic(entities, SIZE, searchIQ);

    return 0;
}

