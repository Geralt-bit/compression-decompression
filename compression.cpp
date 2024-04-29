#include <iostream>
#include <fstream>
int main() {
    ifstream inputFile("input.txt");
    ofstream compressedFile("compressed.txt");

    // Close files
    inputFile.close();
    compressedFile.close();

    return 0;
}
