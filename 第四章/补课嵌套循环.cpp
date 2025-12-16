#include <iostream>
#include<windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //利用嵌套循环打印
    //打印一行星图
    for(int j=0;j<10;j++){//外层循环
    for(int i=0;i<10;i++)//内层循环
    {
        cout<<"* ";

    }
    cout<<endl;
    }
    return 0;
}