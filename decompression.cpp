#include <iostream>
#include <fstream>

int main() {
    ifstream compressedFile("compressed.txt");
    ofstream decompressedFile("decompressed.txt");

    // Close files
    compressedFile.close();
    decompressedFile.close();

    return 0;
}
