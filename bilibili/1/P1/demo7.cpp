#include <iostream>
int main(){
	int sum=0;
	//(初始化 ; 条件 ;执行完for里面的代码之后要干什么)
	for(int val=1;val<=100;++val)
		sum+=val;
	std::cout<<"(For)Sum of 1 to 100 inclisive is "<<sum<<std::endl;
	return 0;
}
