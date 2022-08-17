#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    // long elapsed_seconds = time(nullptr);  // from Jan 1 1970
    // srand(elapsed_seconds);
    srand(time(nullptr));
    int random_number = rand() % 10;
    cout << random_number;
    return 0;
}