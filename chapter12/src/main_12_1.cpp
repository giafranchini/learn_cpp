#include <iostream>
#include <functional>

using arithmeticFunctionRaw = int (*)(int a, int b);
using arithmeticFunction = std::function<int(int, int)>; 

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;    
}

int divide(int a, int b) {
    return a / b;
}

arithmeticFunction getArithmeticFunction(char op) {
    switch (op)
    {
    case '+': return &add; 
    case '-': return &subtract;
    case '*': return &multiply;
    case '/': return &divide;;
    }
    return nullptr;
}

int main() {
    int num1 {};
    int num2 {};
    char op {};
    std::cout << "enter two integer and an operator: ";
    std::cin >> num1;
    std::cin >> num2;
    std::cin >> op;
    arithmeticFunction fcn {getArithmeticFunction(op)};
    // check if not nullptr!!
    if (fcn) {
            std::cout << fcn(num1, num2);
    }
    return 0;
}