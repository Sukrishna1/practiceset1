// Class and Object for Employee Records:

#include <iostream>
#include <string>

class Employee {
public:
    std::string name;
    int employeeID;
    double salary;

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    Employee employees[3];

    for (int i = 0; i < 3; ++i) {
        std::cout << "Enter details for employee " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::cin >> employees[i].name;
        std::cout << "Employee ID: ";
        std::cin >> employees[i].employeeID;
        std::cout << "Salary: ";
        std::cin >> employees[i].salary;
    }

    std::cout << "Employee Records:" << std::endl;
    for (int i = 0; i < 3; ++i) {
        employees[i].display();
        std::cout << std::endl;
    }

    return 0;
}
