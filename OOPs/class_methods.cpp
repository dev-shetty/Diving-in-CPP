#include <iostream>
using namespace std;

class fruits {
   public:
    void fav_fruit(string fruit) {
        cout << "My favourite fruit is " << fruit << endl;
    }
    void hated_fruit(string);
};

void fruits ::hated_fruit(string fruit) { cout << "I hate " << fruit << endl; }

int main() {
    fruits fruit1;
    string favourite;
    string hated;
    cout << "Enter your favourite fruit: ";
    cin >> favourite;
    cout << "Enter your hated fruit: ";
    cin >> hated;

    fruit1.fav_fruit(favourite);
    fruit1.hated_fruit(hated);
}