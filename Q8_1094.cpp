/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1094
 */
#include <iostream>

int main() {
    long long n, x, answer = 0;
    std::cin >> n;
    long long values[n];
    for (int i = 0; i < n; i++) {
        std::cin >> values[i];
    }
    for (int i = 1; i < n; i++) {
        if (values[i] < values[i - 1]) {
            answer += (values[i - 1] - values[i]);
            values[i] = values[i - 1];
        }
    }
    std::cout << answer;
}
