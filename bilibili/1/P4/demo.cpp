#include <iostream>
int main(){
    int a,b;
    short x;
    long y;
    long long m;
    unsigned int p;
    a=1;
    b=2;
    std::cout<<a+b<<std::endl;
    std::cout<<2+3<<std::endl;
    std::cout<<20UL<<std::endl;  //U:usigned L:long LL:long long
    std::cout<<024<<std::endl;   //以0开头的是8进制数
    std::cout<<0x14<<std::endl;  //以0x开头的是16进制数
    return 0;
}
