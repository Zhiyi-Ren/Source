#include <iostream>
int main(){
	char en;
	en='E';//只能保存英文字母以及符号
	wchar_t text;
	text='中';
	printf("%d\n",en);//输出 E 对应的数字
	//0=fales 非零=true
	bool a=true;
	bool b=false;
	std::cout<<"Bool A:"<<a<<" B:"<<b<<std::endl;
	return 0;
}

