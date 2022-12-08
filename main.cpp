#include <iostream>
#include <cassert>

int calculator(int x, int y, char operation) {
    if (operation == '+')
        return x + y;
    if (operation == '-')
        return x - y;
    if (operation == '*')
        return x * y;
}

void testCalculator() {
    assert(calculator(2, 3, '+') == 5);
    assert(calculator(2, 4, '*') == 8);
    assert(calculator(5, 1, '-') == 4);
    std::cout << "Success\n";
}

int main() {
    testCalculator();
    return 0;
}
