#include <iostream>

int A (){
	//A是int型函数，必须有返回值，而且必须是int
	return 0;
}
void B(){
//B是void（特殊）类型，不需要返回值
}

int main(){
	std::cout<<"bool:"<<sizeof(bool)<<std::endl;
	std::cout<<"char:"<<sizeof(char)<<std::endl;
	std::cout<<"wchar_t:"<<sizeof(wchar_t)<<std::endl;
	std::cout<<"short:"<<sizeof(short)<<std::endl;
	std::cout<<"int:"<<sizeof(int)<<std::endl;
	std::cout<<"long:"<<sizeof(long)<<std::endl;
	std::cout<<"long long:"<<sizeof(long long)<<std::endl;
	std::cout<<"float:"<<sizeof(float)<<std::endl;
	std::cout<<"double:"<<sizeof(double)<<std::endl;
	std::cout<<"long double:"<<sizeof(long double)<<std::endl;
	return 0;
}
//bool char wchar_t short int long 都是整型
//float double (long double) 都是浮点型
//short<=int<=long<=long long
//sizeof()可以求出括号内类型的最小字节
