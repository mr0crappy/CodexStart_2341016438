

#include <iostream>

#define MOD 1000000007

int main() {
    int n, answer = 1;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        answer *= 2;
        answer %= MOD;
    }
    std::cout << answer;
}


