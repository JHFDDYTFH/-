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

//1.定义一个结构体


{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //创建学生结构体变量
    struct Student s={"张三,18,100"};
    //通过指针指向结构体变
    struct Student*p=&s;
    //通过指针访问结构体变量中的数据
    //要通过指针访问结构体要用->
    cout<<"姓名"<<p->name<<"年龄："<<p->age<<"分数："<<p->score<<endl;
    return 0;
}
