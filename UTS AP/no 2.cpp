##include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan suatu bilangan bulat: ";
    cin >> angka;
    cout << "Angka " << angka << ((angka % 2 == 0) ? " adalah bilangan genap" : " adalah bilangan ganjil") << endl;
    cout << "Angka " << angka << ((angka % 3 == 0) ? " habis dibagi 3" : " tidak habis dibagi 3") << endl;
    cout << "Angka " << angka << ((angka % 5 == 0) ? " habis dibagi 5" : " tidak habis dibagi 5") << endl;
    cout << "Angka " << angka << ((angka % 7 == 0) ? " habis dibagi 7" : " tidak habis dibagi 7") << endl;
    return 0;
}
