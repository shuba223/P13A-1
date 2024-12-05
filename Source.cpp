#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 26;

int main() {
    string datafile;
    cout << "Enter filename: ";
    getline(cin, datafile);
    ifstream file(datafile);
    if (!file) {
        cout << "Unable to open file.";
        return 1;
    }
    cout << endl;