#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //野指针
    //野指针是指向一块不确定内存的指针
    int*p=(int*)0x1100; //随意给指针赋一个地址
    cout<<*p<<endl; //访问这个地址，可能会引发程序崩溃
    return 0;
}