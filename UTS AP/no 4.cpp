#include <iostream>

int main() {
    int rows = 7; // Ubah nilai rows sesuai dengan tinggi belah ketupat yang diinginkan
    
    // Bagian atas belah ketupat
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    
    // Bagian bawah belah ketupat
    for (int i = rows - 1; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}