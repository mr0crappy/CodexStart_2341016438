/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/2205
 */

#include <iostream>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> gray_code;
    gray_code.push_back("");
    for (int i = 0; i < n; i++) {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--) {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++) {
            if (j < gray_code.size() / 2) {
                gray_code[j] += "0";
            } else {
                gray_code[j] += "1";
            }
        }
    }
    for (int i = 0; i < gray_code.size(); i++) {
        std::cout << gray_code[i] << std::endl;
    }
}
