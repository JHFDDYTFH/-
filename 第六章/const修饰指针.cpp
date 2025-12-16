#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //const修饰指针
    //1.指向常量的指针/常量指针
    //const int*p
    //指针的指向可以修改，但是指针指向的值不可以修改
    int a=10;
    int b=10;
    const int*p=&a;
    //*p=20; 错误，指针指向的值不可以修改
    p=&b; //正确，指针的指向可以修改
    //2.指针常量 const 修饰常量
    int *const p2=&a;
    *p2=20; //正确，指针指向的值可以修改
    //p2=&b; 错误，指针的指向不可以修改
    //int*const p
    //指针的指向不可以修改，但是指针指向的值可以修改
//3.const既修饰指针，又修饰常量
//指针指向的值和指针的指向都不可以修改
const int*const p3=&a;
//*p3=30; 错误，指针指向的值不可以修改
//p3=&b; 错误，指针的指向不可以修改
    return 0;
}