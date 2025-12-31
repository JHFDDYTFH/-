#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct Student
{
string name;    //姓名
int age;//年龄
int score;
};
int main()
//结构体数组
//1.定义一个结构体


{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 

//2.创建结构体数组
struct Student stuArray[3]=
{
    {"张三",18,100},
    {"李四",28,99},
    {"王五",38,66},
};
//3.给结构体数组中的元素赋值
stuArray[2].name="赵六";
stuArray[2].age=80;
stuArray[2].score=60;
//4.遍历结构体数组
for(int i=0;i<3;i++)
{
    cout<<"姓名： "<<stuArray[i].name
    <<"年龄： "<<stuArray[i].name
    <<"分数： "<<stuArray[i].name<<endl;
}
}