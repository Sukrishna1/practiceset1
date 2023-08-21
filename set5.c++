//Class for Basic Arithmetic Operations:

#include <iostream>

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    double divide(int a, int b) {
        if (b != 0) {
            return static_cast<double>(a) / b;
        } else {
            std::cerr << "Error: Division by zero!" << std::endl;
            return 0.0;
        }
    }
};

int main() {
    Calculator calculator;

    int num1 = 10, num2 = 5;
    std::cout << "Addition: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Subtraction: " << calculator.subtract(num1, num2) << std::endl;
    std::cout << "Multiplication: " << calculator.multiply(num1, num2) << std::endl;
    std::cout << "Division: " << calculator.divide(num1, num2) << std::endl;

    return 0;
}
