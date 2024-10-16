#include<iostream>
#include"Sales_item.h"

// 读取不定多组数据,然后把每组数据打印出来。


int main()
{
    Sales_item item;
    while (std::cin>>item)
    {
        std::cout << item << std::endl;
    }
    return 0;
}