//Pattern with Numbers:
#include <iostream>
int main() {
    int rows = 5; // Change this value for the desired number of rows
    int num = 1;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << num << " ";
            ++num;
        }
        std::cout << std::endl;
    }

    return 0;
}
