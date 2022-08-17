#include <iostream>
using namespace std;

int main() {
    double sales = 95000;
    const double state_tax_rate = 4;
    double state_tax = (state_tax_rate * sales) / 100;
    const double county_tax_rate = 2;
    double county_tax = (county_tax_rate * sales) / 100;
    double net_sales = sales - state_tax - county_tax;

    cout << "Sales = $" << sales << endl;
    cout << "State Tax = $" << state_tax << endl
         << "County tax = $" << county_tax << endl;
    cout << "Net sales = $" << net_sales;
}