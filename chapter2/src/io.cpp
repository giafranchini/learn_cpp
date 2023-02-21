#include <iostream>

int readNumber() {
    int n {0};
    std::cout << "Please insert an integer: ";
    std::cin >> n;
    return n;
}

void writeAnswer(int sum) {
    std::cout << "The sum is: " << sum << std::endl;
}