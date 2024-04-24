 #include <iostream>
using namespace std;

int sumOfEvenSquares(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }
    return sum;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    cout << sumOfEvenSquares(n1) << endl;
    cout << sumOfEvenSquares(n2) << endl;

    return 0;
}