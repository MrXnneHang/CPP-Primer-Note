//
//Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    int i = 50;
    int sum = 0;
    while(i<=100)
    {
        sum += i;
        i++;
    }
    std::cout<<"The sum of 50 to 100 is "<<sum<<std::endl;
    return 0;
}