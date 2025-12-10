#include <iostream>
#include <windows.h>
using namespace std;    
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    int a[11];
    int i,j,t;
    cout<<"请输入10个数： "<<endl;
for(i=1;i<11;i++)
cin>>a[i];
cout<<endl;
for(j=1;j<=9;j++)//进行九轮比较
for(i=1;i<=10-j;i++)//找到最大的要进行八轮比较，依次递减
if(a[i]>a[i+1])
{
    t=a[i];a[i]=a[i+1];a[i+1]=t;
}
cout<<"the sorted number : "<<endl;
for(i=1;i<11;i++)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}