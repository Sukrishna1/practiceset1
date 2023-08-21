// Class for Student Records:

#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int rollNumber;
    double averageScore;

    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Average Score: " << averageScore << std::endl;
    }
};

int main() {
    Student student1;
    student1.name = "krishna";
    student1.rollNumber = 101;
    student1.averageScore = 85.5;

    Student student2;
    student2.name = "sam";
    student2.rollNumber = 102;
    student2.averageScore = 76.8;

    student1.display();
    std::cout << std::endl;
    student2.display();

    return 0;
}
