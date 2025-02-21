#include <iostream>

int add(int a, int b);
int multiply4(int a);

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply4(a) << std::endl;

    return 0;
}