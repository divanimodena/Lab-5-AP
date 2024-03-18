#include <iostream>

using namespace std;

int main() {
    double jarak_meter, jarak_kilometer;

    // Meminta pengguna memasukkan jarak dalam meter
    cout << "Masukkan jarak dalam meter: ";
    cin >> jarak_meter;

    // Mengonversi jarak dari meter ke kilometer
    jarak_kilometer = jarak_meter / 1000.0;

    // Menampilkan hasil konversi
    cout << "Jarak dalam kilometer: " << jarak_kilometer << " km" << endl;

    return 0;
}
