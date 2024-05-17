#include <iostream>
using namespace std;

void calculator(char op, int num1, int num2) {
    switch (op) {
        case '+': cout << num1 + num2; break;
        case '-': cout << num1 - num2; break;
        case '*': cout << num1 * num2; break;
        case '/': 
            if (num2 != 0) {
                cout << static_cast<float>(num1) / num2;
            } else {
                cout << "Error: Pembagian dengan nol!";
            }
            break;
        default: cout << "Operator tidak valid!";
    }
}

int main() {
    system("CLS");

    char op;
    int num1, num2;

    do {
        cout << "Input sebuah operator arithmetika (+ - * /): ";
        cin >> op;
    } while (op != '+' && op != '-' && op != '*' && op != '/');

    cout << "Input dua bilangan: ";
    cin >> num1 >> num2;

    calculator(op, num1, num2);
    return 0;
}