#include <iostream>
int main(){
    short a;
    std::cout<<"Signed short:"<<sizeof(signed short)*8<<"bit."<<std::endl;
    std::cout<<"Short:"<<sizeof(short)*8<<"bit."<<std::endl;
    std::cout<<"100,000 mod 65536:"<<100000%65536<<std::endl;
    // % mod
    return 0;
}

// 10:  2un 10^2-1
// 10:  3un 10^3-1

// short(un) 2^16-1=65535