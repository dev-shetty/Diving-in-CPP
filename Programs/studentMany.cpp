#include <iostream>
using namespace std;

struct student {
    string name;
    int mark1, mark2;
    float sum, average;
};

int main() {
    student studentList[10];
    int noOfStudents;
    cout << "Enter the number of students: ";
    cin >> noOfStudents;
    for (int i = 0; i < noOfStudents; i++) {
        cout << "Enter student name: ";
        cin >> studentList[i].name;
        // getline(cin, studentList[i].name);
        cout << "Enter marks in 2 subjects for " << studentList[i].name << ": ";
        cin >> studentList[i].mark1 >> studentList[i].mark2;
        studentList[i].sum = studentList[i].mark1 + studentList[i].mark2;
        studentList[i].average = studentList[i].sum / 2;
        cout << "\n";
    }

    for (int i = 0; i < noOfStudents; i++) {
        cout << "Sum of " << studentList[i].name << " = " << studentList[i].sum
             << "\n";
        cout << "Average of " << studentList[i].name << " = "
             << studentList[i].average << "\n";
    }

    return 0;
}