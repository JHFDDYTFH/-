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
//将函数中的形参改为指针，可以减少内存，而且不会复制新的副本
void printStudents(const Student* s)
{
    // s->age=200; //错误，const修饰后不可修改
    cout<<"姓名： "<<s->name<<"年龄： "<<s->age<<"分数： "<<s->score<<endl;
}
int main()
{
    //创建结构体变量
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    struct Student s={"张三",18,100};
    printStudents(&s);

    //将结构体变量设为常量
    //通过函数打印结构体信息
   
    return 0;   
}