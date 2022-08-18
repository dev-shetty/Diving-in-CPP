#include <iostream>

using namespace std;

struct book {
    int id;
    string name;
    string author;
};

int main() {
    // First variable of book structure
    book book1;
    book1.id = 12;
    book1.name = "Atomic Habits";
    book1.author = "James Clear";

    // Second variable
    book book2;
    book2.id = 24;
    book2.name = "Rich Dad Poor Dad";
    book2.author = "Robert T. Kiyosaki";

    cout << "Id: " << book1.id << endl
         << "Book Name: " << book1.name << endl
         << "Author Name: " << book1.author << endl
         << endl;
    cout << "Id: " << book2.id << endl
         << "Book Name: " << book2.name << endl
         << "Author Name: " << book2.author << endl
         << endl;
}