#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    const short min_value = 1;
    const short max_value = 6;
    srand(time(nullptr));
    short first_dice = rand() % (max_value - min_value + 1) + min_value;
    short second_dice = rand() % (max_value - min_value + 1) + min_value;

    cout << first_dice << ", " << second_dice;
    return 0;
}