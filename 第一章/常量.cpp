#include <iostream>
#include <windows.h>
using namespace std;
#define Day 7
//常量的定义方式
//1.#define宏常量（不可任意修改）
//2.conset修改的变量
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 

cout<<"一周一共有： "<<Day<<"天"<<endl;
const int month=12;
cout<<"一个月一共有： "<<month<<endl;
//const修饰的变量不可以修改

//输出一个小数，会显示6位小数数字
//float4字节
//float f=3.14f//在末尾加上f
//double8字节
//科学计数法
//float f2=3e2;f2=3e-2
//3*10;3*0.1^2
//字符型变量创建方式
//char ch='a'；//创建字符型变量要用单引号，单引号内只能有一个字符
//a-97 b-98后面依次增加
//A-65
//转义字符
//换行\n
//水平制表符\t一共占8个空格——作用是整齐输出数据
//反斜杠\\输出一个/
//字符串型
//C：c风格字符串：char str[]=“ ”
//注意事项 char 字符串名[]
//C++风格的字符串
//string str2="hello world";
//但是要包含一个头文件#include<string>
//布尔类型（只占一个字节大小）
//1.创建bool数据类型
bool flag=true;
cout<<"请给布尔类型赋值"<<flag<<endl;
cin>>flag;//除了0其他都是真
cout<<flag<<endl;
return 0;
}