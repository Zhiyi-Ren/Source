#include <iostream>
int main(){
	int sum=0,val=0;
	//有输入循环，没有输入不循环
	while(std::cin>>val)
		sum+=val;
	std::cout<<"Sum is "<<sum<<std::endl;
	return 0;
}
