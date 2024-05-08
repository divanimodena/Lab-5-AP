#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

float rumusEfisiensi(int A, int B, int C){
    return sqrt(A * A + B * B + C * C);
}

int main() {
    int angka[3][3];

    cout << "Masukkan efisiensi dari tabel 3x3: " << endl;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> angka[i][j];

    double maxEfisiensi = 0;
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            for(int k = 0; k < 3; ++k)
                if(i != j && j != k && i != k) 
                    maxEfisiensi = max(maxEfisiensi, static_cast<double>(rumusEfisiensi(angka[0][i], angka[1][j], angka[2][k])));

    cout << fixed << setprecision(1) << "Nilai efisiensi: " << maxEfisiensi << endl;

    return 0;
}
