//
//Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    for(int i=50;i<=100;i++)
    {
        std::cout<<i<<std::endl;
    }
    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << std::endl;
    }
    int i,j;
    std::cout << "从小到大输入两个数字，中间以空格隔开:";
    std::cin >> i >> j;
    for (; i <= j; i++)
    {
        std::cout << i << std::endl;
    }
    return 0;
}