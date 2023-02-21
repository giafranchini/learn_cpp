#include <iostream>

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n-1); 
    } else {
        return n;
    }
}

int main()
{
    std::cout << factorial(7);
    return 0;
}