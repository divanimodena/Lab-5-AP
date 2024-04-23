#include <iostream>
using namespace std;

int main() {
    int angka;
    bool prima = true;
    cout << "Masukkan suatu bilangan bulat: ";
    cin >> angka;
    for (int i = 2; i <= angka / 2; ++i) {
        if (angka % i == 0) {
            prima = false;
            break;
        }
    }
    cout << angka << (prima && angka > 1 ? " adalah bilangan prima" : " bukan bilangan prima") << endl;
    return 0;
}