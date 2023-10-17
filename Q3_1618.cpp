/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1618
 */
#include <iostream>

int main()
{ 
    long long int t{0}, u{0};
    int x, fv;
    std::cin >> x;
    fv=x;
    while (x!=0) {
        x=x/2;
        t+=x;
    }
    while (fv!=0) {
        fv=fv/5;
        u+=fv;
    }
    if (t<x) {
        std::cout << t;
    }
    else {
        std::cout << u;
    }
}
