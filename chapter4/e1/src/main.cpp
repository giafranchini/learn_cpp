#include <iostream>
#include <iomanip>

double getNumber() {
    double n {0};
    std::cout << "Enter a double value: ";
    std::cin >> n;
    return n;
}

char getOperator() {
    char op {'0'};
    while (true) {
        std::cout << "Enter one of the following: +, -, *, or /: ";
        std::cin >> op;
        bool condition = {(op != '+') && (op != '-') && (op != '*') && (op != '/')};
        if (condition) {
            continue;
        } else {
            return op;
        }
    }
}

double computeOperation(double a, double b, char op) {
    if (op == '+')
        return a+b;
    else if (op == '-')
        return a-b;
    else if (op == '*')
        return a*b;
    else if (op == '/')
        return a/b;
}

int main() {
    double num1 {getNumber()};
    double num2 {getNumber()};
    char op {getOperator()};
    std::setprecision(2);
    std::cout << num1 << op << num2 << " is " << computeOperation(num1, num2, op) << std::endl; 
    return 0;
}