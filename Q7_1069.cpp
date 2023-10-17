/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1069
 */
#include <iostream>                                                                                                                                                                                                                        

int main() {
    std::string s;
    char current;
    int count = 0, answer = 0;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != current) {
            current = s[i];
            count = 0;
        }
        if (s[i] == current) {
            count++;
        }
        answer = std::max(answer, count);
    }
    std::cout << answer;
}
