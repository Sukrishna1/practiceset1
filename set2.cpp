//Structure for Student Records with Loops:

#include <iostream>
#include <string>

struct Student {
    std::string name;
    int rollNumber;
    double averageScore;
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter details for student " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::cin >> students[i].name;
        std::cout << "Roll Number: ";
        std::cin >> students[i].rollNumber;
        std::cout << "Average Score: ";
        std::cin >> students[i].averageScore;
    }

    std::cout << "Student Records:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "Roll Number: " << students[i].rollNumber << std::endl;
        std::cout << "Average Score: " << students[i].averageScore << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
