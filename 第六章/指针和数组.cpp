#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
//指针和数组
//利用指针访问数组中的元素
int arr[10]={1,2,3,4,5,6,7,8,9,10};
cout<<"arr数组的第一个元素是："<<arr[0]<<endl;
int*p=arr;//arr就是数组首地址
cout<<"利用指针访问arr数组的第一个元素："<<*p<<endl;//*p是解引用
p++;//让指针向后偏移4个字节
cout<<"利用指针访问arr数组的第二个元素："<<*p<<endl;
cout<<"利用指针遍历数组的所有元素："<<endl;
int*p2=arr;
for(int i=0;i<10;i++){
    cout<<*p2<<endl;
    p2++;
}
    return 0;
}