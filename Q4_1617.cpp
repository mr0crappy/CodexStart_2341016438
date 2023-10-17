#include <iostream>

int main(){
    int t{};
    long a{},b{};
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::cin >> a >> b;
        if (std::max(a,b)>2*std::min(a,b)) {
            std::cout << "NO" << std::endl;
        }
        else{
            if ((a+b)%3==0) {
                std::cout << "YES" << std::endl;
            }
            else {
                std::cout << "NO" << std::endl;
            }
        }
    }
}
