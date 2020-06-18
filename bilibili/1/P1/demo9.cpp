#include <iostream>
#include "Sales_item.h"
int main(){
	Sales_item total,trans;
	//有输入
	if(std::cin>>total){
		while(std::cin>>trans)
			if(total.isbn()==trans.isbn())
				total=total+trans;
			else{
				//isbn不一样
				std::cout<<total<<std::endl;
				total=trans;
			}
	}else{ //没有输入
		std::cerr<<"No date?!"<<std::endl;
		return 0;
	}
	return 0;
}
