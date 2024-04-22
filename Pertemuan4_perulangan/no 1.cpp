#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan dalam deret: ";
    cin >> n;

    if (n <= 0) {
        cout << "Masukkan bilangan bulat positif yang lebih besar dari nol." << endl;
        return 0;
    }

    int num = 1;
    for (int i = 0; i < n; i++) {
        cout << num << " ";
        if (i % 2 == 0) {
            num += 5;
        } else {
            num += 3;
        }
    }

    return 0;
}