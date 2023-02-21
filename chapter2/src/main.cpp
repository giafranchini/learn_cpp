#include "io.hpp"

int main(){
    int num1 {0};
    int num2 {0};
    int sum {0};
    num1 = readNumber();
    num2 = readNumber();
    sum = num1 + num2;
    writeAnswer(sum);
    return 0;
}