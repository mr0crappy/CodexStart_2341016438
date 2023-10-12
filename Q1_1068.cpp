/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1068
 */

#include <iostream>

int main()
{
    long int n {};
    std::cin >> n;
    std::cout << n << " ";
    while (n != 1) {
        if (n%2 == 0 && n>0) {
            n = n/2;
            std::cout << n << " ";
        }
        else if (n%2 != 0 && n>0) {
            n = (n*3)+1;
            std::cout << n << " ";
        }
        else {
            std::cout << "enter a valid number";
            break;
        }
    }
    return 0;
}

