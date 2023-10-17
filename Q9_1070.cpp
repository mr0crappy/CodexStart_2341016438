/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1070
 */
#include <iostream>


int main() {
    int n;
    std::cin >> n;

    int value = 2;

    if (n == 2 || n == 3) {
        std::cout << "NO SOLUTION";
        return 0;
    }

    while(value <= n) {
        std::cout << value << " ";
        value += 2;
    }

    value = 1;

    while(value <= n) {
        std::cout << value << " ";
        value += 2;
    }

    return 0;
}
