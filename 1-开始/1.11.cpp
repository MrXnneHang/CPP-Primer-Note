//
// Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    int i = 0;
    int j = 0;
    std::cout << "从小到大输入两个数字，中间以空格隔开:";
    std::cin >> i;
    std::cin >> j;
    while(i<=j)
    {
        std::cout<<i<<std::endl;
        i++;
    }
    return 0;
}