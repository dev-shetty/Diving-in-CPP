#include <iostream>

using namespace std;

int main() {
    int numbers[6] = {1, 2, 3, 4, 5, 6};

    // Interating over the array
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << endl;
    }
    cout << endl;
    // Omitting the size of array and initializing the array dynamicaly
    int even_numbers[] = {2, 4, 6, 8, 10, 12, 14, 16};
    cout << "Memory used: " << sizeof(even_numbers)
         << endl;  // prints the memory used by the array
    cout << "Size of the array: " << sizeof(even_numbers) / sizeof(int);

    return 0;
}