#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    cout << "Bilangan Ganjil dan Alamat Memorinya" << endl;

    int bilGanjil[10];
    int sum = 0;
    int maxOdd;

    for (int i = 0; i < 10; i++) {
        bilGanjil[i] = 2*i+1;
        cout << bilGanjil[i] << " Alamatnya : " << &bilGanjil[i] << endl;
        sum += bilGanjil[i];
    }

    maxOdd = bilGanjil[0];
    for (int i = 1; i < 10; i++) {
        if (bilGanjil[i] > maxOdd) {
            maxOdd = bilGanjil[i];
        }
    }

    cout << "\nJumlah dari bilangan ganjil: " << sum << endl;

    cout << "Bilangan ganjil terbesar: " << maxOdd << endl;

    return 0;
}