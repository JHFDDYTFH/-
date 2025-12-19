//函数的定义
//语法：
//返回值类型  函数名  （参数列表）  {函数体语句  return 表达式}
#include <iostream>
using namespace std;
#include<windows.h>
int add(int num_1,int num_2)//num_1是形式上的参数，简称形参
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    int sum=num_1+num_2;
    return sum;
}

int main()
{
 int a=10;
 int b=20;
 int c=add(a,b);//a,b的值是实际的参数，调用时将a,b的值传入形参中
 cout<<"c的值是"<<c<<endl;
 return 0;
}


//函数调用语法：函数名称（参数）
