#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {20, 10, 15, 5, 7};

    // Accessing using iterator
    // Iterator points to the memory where the element is lying
    vector<int>::iterator i = v.begin();
    i++;
    cout << *(i) << "\n";

    // v.begin() gives address and * access the value at the location
    cout << "First element: " << *(v.begin()) << "\n";

    // end() points to memory location after last element (can be any value)
    cout << "End+1 element: " << *(v.end()) << "\n";

    // Points to last element
    cout << "Last element: " << *(v.end() - 1) << "\n";

    // Reverse end points to element before 1st element (can be any value)
    cout << "First-1 element: " << *(v.rend()) << "\n";

    // Reverse begin points to last element
    cout << "Last (using rbegin) element: " << *(v.rbegin()) << "\n";

    // Prints last element
    cout << "Back: " << v.back();

    // Iterate over a vector
    cout << "\n\nIterating over the vector: \n";
    for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
        cout << *(i) << " ";
    }

    // Easier method
    cout << "\n\nEasier Method: \n";
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *(i) << " ";
    }

    // Using forEach
    cout << "\n\nUsing forEach: \n";
    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}