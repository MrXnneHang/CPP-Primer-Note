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

// 一次输入多个值，然后cin+cout组合多次。
// input:1 2 3 4
// output:1 2
int test2()
{
    int i = 0;
    std::cout << "测试输入缓冲区读取方式" << std::endl;
    std::cin>>i;
    std::cout << "i = " << i << std::endl;
    std::cin>>i;
    std::cout << "i = " << i << std::endl;
    return 0;
}

// 测试type error
// input:1 a b c
// output:1 0
// 注意，这不是ASCII编码，把a换成任意的字符或者字符串都是0
int test3()
{
    int i = 0;
    std::cout << "测试输入缓冲区读取方式" << std::endl;
    std::cin>>i;
    std::cout << "i = " << i << std::endl;
    std::cin>>i;
    std::cout << "i = " << i << std::endl;
    return 0;
}

