#include<iostream>
#include"Sales_item.h"

// 读取多组相同ISBN,计算和。

int main()
{
    Sales_item total;
    std::cin>>total; //输入第一个数据，否则isbn会消失
    Sales_item item;
    while(std::cin >> item)
    {
        // std::cout<<total + item<<std::endl;
        total = total + item;
    }
    std::cout<<total<<std::endl;
    return 0;
}

