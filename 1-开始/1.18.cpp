//
//Create By Zhouyuan on 2024/10/14.
//

//频率计数器，不是统计，而是计数连续出现的次数。
//代码量逐渐就上来了。

#include<iostream>

int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1;
        while (std::cin >> val)
        {
            if (val == currVal)
            {
                ++cnt;
            }
            else
            {
                std::cout << currVal << " occurs " << cnt << " times" << std::endl; // 打印上一个数的频次
                currVal = val;
                cnt = 1;
            }
        }

        std::cout << "Hello World";
        // 打印最后一个数的频次
        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
    }
}
