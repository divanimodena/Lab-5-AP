#include <iostream>
using namespace std;
int main() {
    // Variabel
    int l = 2;
    int k = 7;
    int L = 1;
    int C = 9;
    int U = 5;
    int S = 6;
    int I = 3;
 
    //perhitungan manual
    //a.3-1<3 or 7-5<10 and 1+7>=12
    //2<3 or 2<10 and 8>=12
    //True or'(True and False)'
    //True

    //b. (1 % 3 > 5) and (9 / 5 < 6 or 3 * 3 - 7 > -0)
    //(1 > 5) and (1.8 < 6 or 9 - 7 > -0)
    //False and (True or True)
    //False and True
    //False

    //c. (3 - 9 > 7) or (1 + 3 < 36)
    //(-6 > 7) or (4 < 36)
    //False or True
    //True

    //d. 3 or 7 and 1 ^ (3 << 2)
    //3 or 7 and 1 ^ (12)
    //True or 7 and 1 ^ (12)
    //True or 7 and 1 ^ (1100)
    //True or 7 and 1 ^ (0110)
    //True or 7 and 6
    //True or 6
    //True
 
    // Ekspresi relasi dan logika
    bool a_result = (3 - 1 < I) || (k - 5 < 8 + 2 && L + 7 >= 9 + 3);
    bool b_result = (L % 3 > U) and (C / U < S or 3 * I - k > -0);
    bool c_result = (I - 9 > k) or (L + 3 < 4 * C);
    bool d_result = I or k and L ^ (3 << 2);


    // Menampilkan hasil
    std::cout << "a. Hasil: " << (a_result ? "True" : "False") << std::endl;
    std::cout << "b. Hasil: " << (b_result ? "True" : "False") << std::endl;
    std::cout << "c. Hasil: " << (c_result ? "True" : "False") << std::endl;
    std::cout << "d. Hasil (bitwise): " << d_result << std::endl;
    return 0;
}