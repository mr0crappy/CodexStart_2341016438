/*
 *  Name: Pratyush
 *  Reg No: 2341016438
 *  PS link: https://cses.fi/problemset/task/1083
 */

#include <iostream>

int main()
{
    long int x{}, nums{}, usersum{0}, sum{0};
    std::cin >> x;
    for (int i = 1; i < x; i++) {
       std::cin >> nums;
       usersum += nums;
    }
    sum = (x*(x+1))/2;      //finds the sum of all numbers in range
    //subtracting sum of all the numbers input from the total sum                        
    std::cout << sum-usersum;          
}
