#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //空指针
    //1.空指针用于给指针变量初始化
    int*p=NULL;
    //2.空指针是不可以进行访问的
    //0~255之间的内存是系统保留的，用户程序不能访问
    *p=100;
    return 0;
}