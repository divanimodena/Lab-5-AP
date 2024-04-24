#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cout << "Ho";
        for (int j = 0; j < i; ++j) {
            cout << "o";
        }
        cout << "re!";
        if (i < n - 1) {
            cout << endl;
        }
    }

    return 0;
}