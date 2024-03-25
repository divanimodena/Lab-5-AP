#include <iostream>
using namespace std;

int main() {
    double beratBadan, bmi;
    string kategori;

    cout << "Masukkan berat badan Anda dalam kilogram: ";
    cin >> beratBadan;

    bmi = beratBadan / (2.54 * 2.54);

    if (bmi < 18.5) {
        kategori = "Berat badan kurang";
    } else if (bmi >= 18.5 && bmi < 25) {
        kategori = "Berat badan normal";
    } else if (bmi >= 25 && bmi < 30) {
        kategori = "Berat badan berlebih";
    } else {
        kategori = "Obesitas";
    }

    cout << "Kategori berat badan Anda: " << kategori << endl;

    return 0;
}