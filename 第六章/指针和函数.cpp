#include <iostream>
#include<windows.h>
using namespace std;
void swap01(int a,int b){//值传递
    int temp=a;
    a=b;
    b=temp;
    cout<<"交换后：a="<<a<<",b="<<b<<endl;
}
void swap02(int*p1,int*p2){//地址传递
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
//实现两个数字进行交换
    //指针和函数
    //1.值传递不改变实参
    int a=10;
    int b=20;
   // swap01(a,b);
   //2.地址传递会改变实参
   //
   swap02(&a,&b);
    cout<<"a="<<a<<",b="<<b<<endl;

    return 0;
}