#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    string jurusan;
    float ipk;
};

int main() {
    Mahasiswa mhs;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, mhs.nama);
    
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, mhs.nim);

    cout << "Masukkan jurusan mahasiswa: ";
    getline(cin, mhs.jurusan);

    cout << "Masukkan IPK mahasiswa: ";
    cin >> mhs.ipk;

    cout << "\nData Mahasiswa:" << endl;
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Jurusan: " << mhs.jurusan << endl;
    cout << "IPK: " << mhs.ipk << endl;

    return 0;
}
