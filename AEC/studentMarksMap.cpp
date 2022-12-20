// Write a C++ program to store name and marks of 5 students and display their results lexologically

#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> student;
    string name;
    int marks;
    for(int i=0; i<5; i++) {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;

        student[name] = marks;
        // student.insert({name, marks});
    }

    for(auto it: student) {
        cout << it.first << " " << it.second << "\n";
    }
    cout << "\n";

    // To check whehter the key is there or not
    auto it = student.find("Rohan");
    if(it != student.end())
        student.erase(it);

    // If sure it is present
    student.erase("Srujan");


    cout << "Updated" << "\n";
    for(auto it: student) {
        cout << it.first << " " << it.second << "\n";
    }
    cout << "\n";

    return 0;
}