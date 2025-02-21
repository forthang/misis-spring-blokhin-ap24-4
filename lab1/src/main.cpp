#include <iostream>

int add(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Substraction: " << substraction(a,b) << std::endl;
    std::cout << "Multiplication: " << multiplication(a, b) << std::endl;

    return 0;
}