#include<iostream>


long long exp(int e,int x)
{
	if (x<0)
	{
		std::cerr<<"请输入大于0的指数";
		return -1;
	}
	long long result = 1;
	for(int i=0;i<=x;i++)
	{
		result = result * e;
	}
	return result;
}



int main()
{
	std::cout<<"umsigned group"<<std::endl<<std::endl;
	
	unsigned u = 10, u2 = 42;
	std::cout<<u2<<" - "<<u<<" = "<< u2 - u << std::endl;
	std::cout<<u<<" - "<<u2	<<" = "<<u - u2 << std::endl;
	std::cout<<2<<" ^ "<<32<<" = "<<exp(2,32)<<std::endl;
	std::cout<<2<<" ^ "<<31<<" = "<<exp(2,31)<<std::endl<<std::endl;
	
	std::cout<<"int group"<<std::endl<<std::endl;
	int i = 10,i2 = 42;
	std::cout<<i<<" - "<<i2<<" = "<<i - i2<<std::endl;
	std::cout<<i2<<" - "<<i<<" = "<<i2 - i<<std::endl<<std::endl;

	std::cout<<"mix group"<<std::endl<<std::endl;
	std::cout<<i<<" - "<<u<<" = "<<i - u<<std::endl;
	std::cout<<u<<" - "<<i<<" = "<<u - i<<std::endl<<std::endl;
	std::cout<<i<<" - "<<u2<<" = "<<i - u2<<std::endl;
	std::cout<<u2<<" - "<<i<<" = "<<u2 - i<<std::endl<<std::endl;
	return 0;
}
