#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);
    
    cout << "Hasil Akhir:" << endl;
    for (int i = kalimat.length() - 1; i >= 0; i--) {
        if (kalimat[i] != ' ') {
            cout << kalimat[i] << endl;
        } else {
            continue;
        }
    }

    return 0;
}