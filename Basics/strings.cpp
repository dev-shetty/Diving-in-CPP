#include <iostream>
using namespace std;
int main() {
    string greeting = "Hello World";
    cout << greeting << endl;

    // CONCATENATE
    string first_name = "Deveesh";
    string last_name = "Shetty";
    string name = first_name + last_name;
    cout << "Name: " << name << endl;

    // APPEND
    string full_name = first_name.append(last_name);
    cout << "Full name is: " << full_name << endl;

    // Length or size
    string long_string = "thisisaverylongsentenceiwanttofindlengthof";
    cout << long_string.length() << endl;
    cout << long_string.size() << endl;

    // Access character of a string
    cout << long_string[10] << endl;

    // Inputting a string
    string user_input_string;
    cout << "Enter any string: ";
    getline(cin, user_input_string);
    cout << "User inputted: " << user_input_string;

    return 0;
}
