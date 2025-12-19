#include <iostream>
#include<windows.h>
using namespace std;
//值传递
//定义函数,实现两个数字进行交换
//如果函数不需要返回值，声明的时候可以写void;
//值传递的时候，形参发生任何改变都不影响实参的值
void swap(int num_1, int num_2)
{
    int temp;
    temp=num_1;
    num_1=num_2;
    num_2=temp;
}
void test01();
int test02();
void test03(int a);
int test04(int a);
 int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    int a=10;
    int b=20;
    swap (a,b);
    test01();
  int  num1=test02();
  cout<<"num1="<<num1<<endl;
  test03(a);
int num2=test04(10000);
  
    return 0;
}
//值传递的四种类型
//1.无参无返 无参数返回要加void;
void  test01()
{
    cout<<" this is the test 01"<<endl;
}
//2.无参有返
int test02()
{
    cout<<"this is test 02"<<endl;
    return 1000;
}
//3.有参无返
void test03(int a)
{
    cout<<"the a is"<<a<<endl;
}
//4.有参有返
 int test04(int a)
 {
    cout<<"this is the test04"<<a<<endl;
    return a;
 }

//函数的声明
//若函数的定义在main函数以后
//则需加一个函数的声明在main函数以前，且可以声明多次，但只能定义一次。