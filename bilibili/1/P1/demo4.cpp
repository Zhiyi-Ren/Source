#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item item1,item2;
	std::cout<<"输入相同ISBN的书本："<<std::endl;
	std::cin>>item1>>item2;
	//判断ISBN是否相等
	if (item1.isbn()==item2.isbn()){
		std::cout<<item1+item2<<std::endl;
		return 0;
	}else{
		std::cerr<<"Date must refer to same ISBN!!!"<<std::endl;
		return -1;
	}
}
