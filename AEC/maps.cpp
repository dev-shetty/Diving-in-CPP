#include<bits/stdc++.h>
using namespace std;

int main() {
    // map<string, int> student = {{"Deveesh", 15}, {"Rohan", 56}};
    // student.insert({"Dev", 54});
    // student["sdjaskdnas"] = 65;
    // student.insert({"Gaurav", 36});
    // student.insert({"Adithya", 99});
    // for(auto it=student.begin(); it != student.end(); it++) {
    //     cout << it->first << " " << it->second << "\n";
    // }

    map<int, string> student = {{15, "Deveesh"}, {56, "Rohan"}};
    student.insert({54, "Dev"});
    student[65] = "sdajkdbkabds";
    student.insert({36, "Gaurav"});
    student.insert({99, "Adithya"});
    student.insert(make_pair(15, "Hello World")); // Wont insert duplicate keys
    for(auto it=student.begin(); it != student.end(); it++) {
        cout << it->first << " " << it->second << "\n";
    }

    return 0;
}