#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;

    // Menggunakan cin
    cout << "Masukkan nama (menggunakan cin): ";
    cin >> nama;
    cout << "Nama (menggunakan cin): " << nama << endl;

    // Membersihkan buffer
    cin.ignore();

    // Menggunakan getline
    cout << "Masukkan nama (menggunakan getline): ";
    getline(cin, nama);
    cout << "Nama (menggunakan getline): " << nama << endl;

    return 0;
}
