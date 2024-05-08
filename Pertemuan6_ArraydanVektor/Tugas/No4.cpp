#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> deret;
    string angka;

    cout << "Masukkan sebuah deret angka: " << endl;
    getline(cin, angka);

    stringstream stream(angka);
    int bil;
    while (stream >> bil)
        deret.push_back(bil);

    cout << "Panjang vektor: " << deret.size() << endl;

    for (int num : deret)
        cout << num << endl;

    cout << "Panjang vektor: " << deret.size() << endl;

    return 0;
}
