//biaasanya dipakai untuk faktorial
#include <iostream>
using namespace std;

int fakt(int input) {
    int hasil = 1;
    if (input > 1)
    {
        return input * fakt(input-1);
    } else {
        return 1;
    }
    
}

int main() {
    system("cls");
    
    cout << "hasil" << fakt(5);
    return 0;
}