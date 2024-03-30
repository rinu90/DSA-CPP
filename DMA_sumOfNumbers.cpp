#include <iostream>

int main() {
    int n = 10; // Specify the size of the array

    // Dynamically allocate memory for the array
    int *arr = new int[n];

    // Initialize the array with values
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1; // Assigning values from 1 to 10 for demonstration
    }

    // Calculate sum of elements in the array
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Output the sum
    std::cout << "Sum of numbers in the array: " << sum << std::endl;

    // Deallocate memory for the array
    delete[] arr;

    return 0;
}
