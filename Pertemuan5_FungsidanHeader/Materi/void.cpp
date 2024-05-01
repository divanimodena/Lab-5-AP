#include <iostream>
using namespace std;

void garis(int karr) {
   // for (int i = 0; i < karr; i++)
    //{
      //  cout << "=";
    //}
    
    cout << string(karr, '*');
}

int main() {
    system("cls");

    garis(7);
    cout << "program";
    garis(7);

    return 0;
}