#include <iostream>
#include <locale.h>
int main(){
	std::cout<<"Hello,World!"<<std::endl;
	//字符是8bit
	std::cout<<'A'<<std::endl;
	//字符串："A"='A','\0'
	std::cout<<"A"<<std::endl;
	std::cout<<"普通字符串"<<std::endl;
	//std::cout<<L"这是宽字符"std::endl;
	setlocale(LC_ALL,"chs");
	wprintf(L"%ls\n",L"这是宽字符");
	return 0;

}
