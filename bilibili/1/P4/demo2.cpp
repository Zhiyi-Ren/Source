#include <iostream>
int main(){
	std::cout<<3.14159<<std::endl;  //默认是double
	std::cout<<3.14159F<<std::endl; //F:float
	std::cout<<3.14159L<<std::endl;  //L在浮点数里面表示long double
	//0.001=1x10^-3=1e-3
	//科学计数法
	//<e前面的数>乘10的<e后面的数>次方
	std::cout<<3.14159e0<<std::endl;
	std::cout<<3.14159e2f<<std::endl;
	std::cout<<3.14159e3L<<std::endl;
	std::cout<<3.141593-4<<std::endl;
	return 0;
}
