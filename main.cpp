#include <bits/stdc++.h>
using namespace std;

void compress(const string& inputFile, const string& compressedFile) {
    ifstream fin(inputFile);
    ofstream fout(compressedFile);

    char prevChar;
    int count = 1;
    char currentChar;
    fin.get(currentChar);
    prevChar = currentChar;

    while (fin.get(currentChar)) {
        if (currentChar == prevChar) {
            count++;
        }
        else {
            fout << count << prevChar << " ";
            count = 1;
        }
        prevChar = currentChar;
    }

    fout << count << prevChar;

    fin.close();
    fout.close();

    cout << "Compression successful." << endl;
}

void decompress(const string& compressedFile, const string& decompressedFile) {
    ifstream fin(compressedFile);
    ofstream fout(decompressedFile);

    int count;
    char character;

    while (fin >> count >> character) {
        for (int i = 0; i < count; i++) {
            fout << character;
        }
    }

    fin.close();
    fout.close();

    cout << "Decompression successful." << endl;
}

int main() {
    string inputFileName = "input.txt";
    string compressedFileName = "compressed.txt";
    string decompressedFileName = "decompressed.txt";

    compress(inputFileName, compressedFileName);
    decompress(compressedFileName, decompressedFileName);

    return 0;
}
