#include <iostream>
#include <string>

std::string fizzBuzz(int num) {
    if (num % 15 == 0) return "FizzBuzz";
    if (num % 3 == 0) return "Fizz";
    if (num % 5 == 0) return "Buzz";
    return std::to_string(num);
}

void triangleSequence(int x) {
    for (int i = 2, count = 0; count < x; ++i, ++count) {
        std::cout << fizzBuzz(i);
        if (count < x - 1) std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {
    int x;
    std::cout << "Masukkan bilangan x (3 < x <= 100): ";
    std::cin >> x;

    if (x < 3 || x > 100) {
        std::cout << "Input tidak valid, berikan nilai dengan rentang 3-100" << std::endl;
    } else {
        triangleSequence(x);
    }

    return 0;
}