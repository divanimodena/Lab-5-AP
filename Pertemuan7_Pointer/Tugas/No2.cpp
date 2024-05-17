#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int a = 10, *px = &a;

    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "px = " << px << endl;
    cout << "*px = " << *px << endl;
    cout << "px tidak sama dengan *px, px berisi alamat dari variabel a, dan *px berisi nilai dari variabel a" << endl;
    
    return 0;
}