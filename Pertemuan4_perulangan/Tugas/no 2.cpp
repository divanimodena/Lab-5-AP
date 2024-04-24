#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    char huruf;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    cout << "Masukkan huruf yang ingin dihapus: ";
    cin >> huruf;

    int karakter_terhapus = 0;
    for (int i = 0; i < kalimat.length(); ++i) {
        if (kalimat[i] != huruf) {
            cout << kalimat[i];
        } else {
            karakter_terhapus++;
        }
    }

    cout << "\nKarakter terhapus = " << karakter_terhapus << endl;

    return 0;
}