#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama1, nama2;

    system("cls");
    cout << "Masukkan Nama Mahasiswa (menggunakan getline): ";
    getline(cin, nama1); 
    cout << "Masukkan Nama Mahasiswa (menggunakan cin): ";
    cin >> nama2; 

    cout << "Nama Mahasiswa (menggunakan getline): " << nama1 << endl; 
    cout << "Nama Mahasiswa (menggunakan cin): " << nama2 << endl; 

}
