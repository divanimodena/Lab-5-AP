#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string terinfeksi;

    cout << "Masukkan string S maksimal 100 karakter huruf kapital ('A'-'Z') dan spasi (' '): " << endl;
    getline(cin, terinfeksi);

    reverse(terinfeksi.begin(), terinfeksi.begin() + terinfeksi.length() / 2);
    cout << "String yang telah diperbaiki: " << endl << terinfeksi;

    return 0;
}