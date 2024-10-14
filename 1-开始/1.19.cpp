//
//Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    int i,j;
    int a,b;
    std::cout<<"请输入两个数字，中间以空格隔开:";
    std::cin>>i>>j;
    if (i > j)
    {
        a = j;
        b = i;
    }
    else
    {
        a = i;
        b = j;
    }
    while (a <= b)
    {
        std::cout << a << std::endl;
        a++;
    }
    return 0;
}