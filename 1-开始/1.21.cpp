#include<iostream>
#include"Sales_item.h"

// 读取两组相同ISBN,计算和。

int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}

