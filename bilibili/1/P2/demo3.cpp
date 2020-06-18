#include <iostream>
int main(){
	//unsigned无符号
        //signed有符号
	int a;
	short b;
	long c;
	unsigned int a2;
	unsigned short b2;
	unsigned long c2;

	char m;            //不确定
	signed char m3;    //有符号 -128-127
	unsigned char m2;  //无符号    0-255

	//好奇
	m2=255;
	printf("%d\n",m2);
	m2=366;
	printf("%d\n",m2);
	//负数
	m2=-1;
	printf("%d\n",m2);

	return 0;
}
