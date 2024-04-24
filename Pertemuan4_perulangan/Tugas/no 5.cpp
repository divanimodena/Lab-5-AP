 #include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n)) {
        cout << "Prima" << endl;
    } else {
        cout << "Bukan Prima" << endl;
    }

    return 0;
}