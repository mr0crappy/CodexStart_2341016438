#include <iostream>

int main() {
    long long n;
    std::cin >> n;

    std::cout << 0 << std::endl;
    for (long long i = 2 ; i <= n ; i++) {
        std::cout << (i * i) * (i * i - 1) / 2 - (4 * (i - 2) * (i - 1)) << std::endl;
    }

    return 0;
}
