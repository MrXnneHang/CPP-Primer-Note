//
// Created by Zhouyuan on 2024/10/14.
//

#include<iostream>

int main()
{
    std::cout<<"/*"<<std::endl;
    std::cout<<"*/"<<std::endl;
    std::cout<</* "*/"*/"<<std::endl;
    std::cout<</* "/*"/*"/*"*/<<std::endl;
    return 0;
}