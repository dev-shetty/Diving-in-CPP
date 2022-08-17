#include <iostream>
using namespace std;

int main() {
    double temperature_fahrenheit;
    double temperature_celsius;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature_fahrenheit;
    temperature_celsius = (temperature_fahrenheit - 32) / 1.8;
    cout << "Temperature is " << temperature_celsius << " C";
    return 0;
}