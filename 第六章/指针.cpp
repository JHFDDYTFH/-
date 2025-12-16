#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //可以通过指针来保存一个地址
//1.定义一个指针
int a=10;
//指针定义的语法：数据类型*指针变量名；
int*p;
//让指针记录变量a的地址
p=&a;
cout<<"a的地址是："<<&a<<endl;
cout<<"指针p的值是："<<p<<endl;
//2.使用指针
//可以通过解引用的方式来找到指针指向的内存
//指针前加*号表示解引用
*p=1000;
cout<<"a的值是："<<a<<endl;
cout<<"指针p为："<<p<<endl;
return 0;
}



