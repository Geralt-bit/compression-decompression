#include <bits/stdc++.h>
using namespace std;

void compress(const string& inputFile, const string& outputFile) {
    map<string, int> dictionary;
    ifstream fin(inputFile);
    ofstream fout(outputFile);

    int index = 0;
    string word;
    while (fin >> word) {
        if (dictionary.find(word) == dictionary.end()) {
            dictionary[word] = index++;
        }
        fout << dictionary[word] << " ";
    }

    fin.close();
    fout.close();
}

void decompress(const string& inputFile, const string& outputFile) {
    map<int, string> dictionary;
    ifstream fin(inputFile);
    ofstream fout(outputFile);

    string line;
    while (getline(fin, line)) {
        istringstream iss(line);
        int index;
        while (iss >> index) {
            if (dictionary.find(index) == dictionary.end()) {
                cerr << "Error: Index not found in dictionary." << endl;
                return;
            }
            fout << dictionary[index] << " ";
        }
    }

    fin.close();
    fout.close();
}

int main() {
    compress("input.txt", "compressed.txt");
    decompress("compressed.txt", "decompressed.txt");
    return 0;
}
