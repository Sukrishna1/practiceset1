//Array Manipulation using Pointers:

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array Elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << *ptr << " ";
        ++ptr;
    }

    return 0;
}
