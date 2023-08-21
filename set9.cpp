// Sum of Digits:
#include <iostream>

int main() {
    int number = 12345; // Change this value to the desired number
    int sum = 0;
    int temp = number;

    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    std::cout << "Sum of digits of " << number << " is: " << sum << std::endl;

    return 0;
}
