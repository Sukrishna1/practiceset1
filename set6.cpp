//Array Sum and Average:

#include <iostream>

int main() {
    int arr[] = {5, 2, 8, 1, 9, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;

    std::cout << "Sum of array elements: " << sum << std::endl;
    std::cout << "Average of array elements: " << average << std::endl;

    return 0;
}
