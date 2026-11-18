
#include <iostream>

int main() {
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    int sum = a + b;

    std::cout << "Sum: " << sum << std::endl;

    if (a > b) {
        std::cout << a << " is greater." << std::endl;
    }
    else if (b > a) {
        std::cout << b << " is greater." << std::endl;
    }
    else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}
