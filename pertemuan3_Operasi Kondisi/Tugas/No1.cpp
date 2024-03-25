#include <iostream>
using namespace std;

int main()
{
    int bil;
    cout<<"masukkan bil bulat:";
    cin >> bil ;
    cout << endl;
    
    if (bil %2==0){
        cout<<"bilangan genap";
    }else{
        cout<<"bilangan ganjil";
    }
}