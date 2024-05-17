#include <iostream>
using namespace std;

int main() {
    system("cls");
    const char* kata = "K O M P U T E R";
    const char* ptr = nullptr;
    int indeks = 0;

    for (const char* p = kata; *p; ++p) {
        if (*p >= 'A' && *p <= 'Z') {
            if (++indeks == 5) {
                ptr = p;
                break;
            }
        }
    }

    if (ptr) {
        cout << "Huruf kelima dari kata \"" << kata << "\" adalah: " << *ptr << endl;
    } else {
        cout << "Huruf kelima tidak ditemukan." << endl;
    }

    return 0;