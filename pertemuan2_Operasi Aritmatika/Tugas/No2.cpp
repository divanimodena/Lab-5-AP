#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    // Input nilai A, B, dan C
    cout << "Masukkan nilai A: ";
    cin >> a;
    cout << "Masukkan nilai B: ";
    cin >> b;
    cout << "Masukkan nilai C: ";
    cin >> c;

    // Menghitung diskriminan
    double diskriminan = b * b - 4 * a * c;
    
    // Menghitung akar-akar persamaan kuadrat
    if (diskriminan > 0) {
        double x1 = (-b + sqrt(diskriminan)) / (2 * a);
        double x2 = (-b - sqrt(diskriminan)) / (2 * a);
        cout << "Nilai x1 = " << x1 << endl;
        cout << "Nilai x2 = " << x2 << endl;
    } else if (diskriminan == 0) {
        double x = -b / (2 * a);
        cout << "Nilai x1 = x2 = " << x << endl;
    } else {
        double real_part = -b / (2 * a);
        double imaginary_part = sqrt(abs(diskriminan)) / (2 * a);
        cout << "Nilai x1 = " << real_part << " + " << imaginary_part << "i" << endl;
        cout << "Nilai x2 = " << real_part << " - " << imaginary_part << "i" << endl;
    }

    return 0;
}