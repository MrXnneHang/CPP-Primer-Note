//
//Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    int i = 0;
    int sum = 0;
    while(std::cin>>i)
    {
        std::cout<<sum<<"+"<<i<<"="<<sum+i<<std::endl;
        sum += i;
    }
    return 0;
}