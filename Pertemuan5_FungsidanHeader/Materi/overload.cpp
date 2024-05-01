#include <iostream>
using namespace std;
int operasi(int num1, int num2){
    return num1 * num2;
}

float operasi(float num1, float num2) {
    return num1 / num2;
}

int main() {
    system("cls");
    
    int x = 5, y = 6;
    float n = 2.3, m = 2.2;
    cout << "hasil kali: " << operasi(x, y) << endl;
    cout << "hasil bagi: " << operasi(n, m) << endl;
    
    return 0;
}