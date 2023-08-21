//Prime Numbers in a Range:

#include <iostream>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int start = 10; // Change this value to the start of the range
    int end = 50;   // Change this value to the end of the range

    std::cout << "Prime numbers between " << start << " and " << end << " are:" << std::endl;
    for (int i = start; i <= end; ++i) {
        if (isPrime(i))
            std::cout << i << " ";
    }

    return 0;
}
