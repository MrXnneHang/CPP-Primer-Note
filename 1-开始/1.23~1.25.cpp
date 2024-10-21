//
//Create by xnne at 2024/10/18
//

#include<iostream>
#include"Sales_item.h"

//书店程序
//上课时，老师的第一章是C++历史，优点。
//第二章是安装Visual Studio
//第三章是hello world。
//直到最后一章才到类。而且还没有运算符重载等等、
//所以差别就在这里了，人家第一章全介绍了，还抽空讲了讲shell的输入输出重定向和bash指令的自定义。
//所以，上过CPP的课，只算基础中的浅表。

// 因为实际上要聚合不同的isbn需要数据结构来存储，而且还需要动态扩容。
// 而我还没学到那边，所以这本也仅仅只是把连续的合并聚拢，只遍历一遍，这也是书里的示例代码。

int main()
{
    Sales_item total;
    //统计每个isbn的销售记录条数:
    if (std::cin>>total)
    {
        std::cout<<"开始计数,策略：将连续的相同isbn合并来降低输出log。"<<std::endl;
    }
    else
    {
        std::cerr<<"没有输入，正常退出程序"<<std::endl;
        return 0;
    }
    Sales_item item;
    while(std::cin>>item)
    {
        //如果输入书的isbn==total的isbn
        if (item.isbn() == total.isbn())
        {
            total+=item;
        }
        //如果输入的书的isbn!=total的isbn
        else
        {
            std::cout<<total<<std::endl;
            total = item;
        }
    }
    std::cout<<total<<std::endl;
    return 0;
}