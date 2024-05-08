#include <iostream>
using namespace std;

int nilaiKombinasi(int x, int y) {
    return (y == 1 || y == x) ? 1 : nilaiKombinasi(x - 1, y - 1) + nilaiKombinasi(x - 1, y);
}

int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga pascal: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << nilaiKombinasi(i, j) << " ";
        cout << endl;
    }

    int x, y;
    cout << "Masukkan dua buah bilangan x dan y, yang merupakan index (1 <= x, y <= 30 | y <= x ): ";
    cin >> x >> y;

    if (x < 1 || x > 30 || y < 1 || y > x) {
        cout << "Tidak valid. Masukkan bilangan dengan index (1 <= x, y <= 30 | y <= x )" << endl;
        return 1;
    }

    cout << "Nilai pada Indeks [" << x << "][" << y << "]= " << nilaiKombinasi(x, y) << endl;

    return 0;
}
