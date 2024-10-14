//
// Create By Zhouyuan on 2024/10/14.
//

#include<iostream>

// 一个cin,多个输入值。
//input:1 2 3 4
//output:1
int test1()
{
    int i = 0;
    std::cout << "测试输入缓冲区读取方式" << std::endl;
    std::cin>>i;
    std::cout << "i = " << i << std::endl;
    return 0;
}



