/*#include <iostream>

int main() {
    int distance_AB, distance_BC, cargo_weight;
    int fuel_capacity = 300;

    std::cout << "distance between points A and B (km): ";
    std::cin >> distance_AB;
    std::cout << "distance between points B and C (km): ";
    std::cin >> distance_BC;
    std::cout << "weight of the cargo (kg): ";
    std::cin >> cargo_weight;

    int fuel_consumption;
    if (cargo_weight <= 500)
        fuel_consumption = 1;
    else if (cargo_weight <= 1000)
        fuel_consumption = 4;
    else if (cargo_weight <= 1500)
        fuel_consumption = 7;
    else if (cargo_weight <= 2000)
        fuel_consumption = 9;
    else {
        std::cout << "Eror!" << std::endl;
        return 0;
    }

    int total_fuel_needed = (distance_AB + distance_BC) * fuel_consumption;
    int fuel_required_in_B = total_fuel_needed - fuel_capacity;

    if (fuel_required_in_B > 0)
        std::cout << "It is necessary to refuel " << fuel_required_in_B << " liters of fuel at point B." << std::endl;
    else
        std::cout << "Flight from point A to point C is possible without refueling at point B." << std::endl;

    return 0;
}*/
#include <iostream>

int main() {
    int sales_manager1, sales_manager2, sales_manager3;
    int base_salary = 200;
    int bonus1 = 0, bonus2 = 0, bonus3 = 0;

    std::cout << "sales level for manager 1: ";
    std::cin >> sales_manager1;
    std::cout << "sales level for manager 2: ";
    std::cin >> sales_manager2;
    std::cout << "sales level for manager 3: ";
    std::cin >> sales_manager3;

    if (sales_manager1 > 1000)
        bonus1 = 0.08 * sales_manager1;
    else if (sales_manager1 > 500)
        bonus1 = 0.05 * sales_manager1;
    else
        bonus1 = 0.03 * sales_manager1;

    if (sales_manager2 > 1000)
        bonus2 = 0.08 * sales_manager2;
    else if (sales_manager2 > 500)
        bonus2 = 0.05 * sales_manager2;
    else
        bonus2 = 0.03 * sales_manager2;

    if (sales_manager3 > 1000)
        bonus3 = 0.08 * sales_manager3;
    else if (sales_manager3 > 500)
        bonus3 = 0.05 * sales_manager3;
    else
        bonus3 = 0.03 * sales_manager3;

    std::cout << "Salary of manager 1: " << base_salary + bonus1 + 200 << std::endl;
    std::cout << "Salary of manager 2: " << base_salary + bonus2 + 200 << std::endl;
    std::cout << "Salary of manager 3: " << base_salary + bonus3 + 200 << std::endl;

    return 0;
}

