#include <iostream>
using namespace std;


int num3 = 10; //variabel global
int sumNumber(int num1, int num2) { // (int num2 = 10) #ini default
    //tidak boleh dimulai dnegan angka, tidak boleh spasi
   // return 0; // mengembalikan nilai. kalau void tidak mengenmbalikan nilai

//int num3 = 10 #lokal
    return num1 + num2;
}

int main() {
    system("cls");
    
    int hasil = sumNumber(5, 10);
    
    cout << hasil;

    return 0;
}

// build in function 
// user defined function = fungsi yang dibuat sendiri

//default para meter itu didefinisakan didalam parameter itu sendiri


//variabel lokal yang hanya bisa diakses dalam fungsi itu
// variabel global ditempatkan diluar fungsi dan bisa di