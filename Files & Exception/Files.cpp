#include <fstream>
#include <iostream>

int main() {
    // Create the File
    std::ofstream MyFile("created_file.txt");

    // Write to the file
    MyFile << "This is a file i created using a C++ program" << std::endl
           << "This file is created by Deveesh :)" << std::endl;

    // Close the file
    MyFile.close();

    std::string text;
    // Read a file
    std::ifstream MyNewFile("created_file.txt");

    while (getline(MyNewFile, text)) {
        std::cout << text << std::endl;
    }

    MyNewFile.close();
}