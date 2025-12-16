#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //指针所占内存空间
    int a=10;
    //int*p;
    //p=&a;
    int *p = &a;
    //在32位系统中，指针占4个字节，在64位系统中，指针占8个字节
    cout << "a = " << a << ", &a = " << &a << ", p = " << p << ", *p = " << *p << endl;
    cout<<"sizeof(int*)="<<sizeof(int*)<<endl;
     cout<<"sizeof(int*)="<<sizeof(float*)<<endl;
      cout<<"sizeof(int*)="<<sizeof(double*)<<endl;
       cout<<"sizeof(int*)="<<sizeof(char*)<<endl;
    return 0;
}