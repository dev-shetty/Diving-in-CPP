#include <iostream>
using namespace std;

int main() {
    string name;
    int marks1, marks2;
    float sum, average;
    cout << "Enter student name: ";
    getline(cin, name);
    cout << "Enter marks in 2 subjects: ";
    cin >> marks1 >> marks2;
    sum = marks1 + marks2;
    average = sum / 2;
    cout << "Sum of " << name << " = " << sum << "\n";
    cout << "Average of " << name << " = " << average << "\n";
    return 0;
}