#include <iostream>
//以下的头文件用于处理宽字符
#include <locale.h>
#include <wchar.h>
#include <stdlib.h>

int main(){
    char a='a';
    wchar_t y=L'中';//宽字符
    printf("%c\n",'A'); //不能是宽字符
    setlocale(LC_ALL,"chs");//设置语言
    wprintf(L"%lc\n",L'中');//注意，只有wprintf才能处理宽字符，并且要加上'L'
    return 0;
}
