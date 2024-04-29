#include <iostream>
#include <fstream>

int main() {
    std::ifstream compressedFile("compressed.txt");
    std::ofstream decompressedFile("decompressed.txt");

    // Close files
    compressedFile.close();
    decompressedFile.close();

    return 0;
}
