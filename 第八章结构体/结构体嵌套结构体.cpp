#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
//定义学生结构体
struct student
{
    string name;
    int age;
    int score;
};
struct teacher
{
    int id;string name;
    int age;
    struct student stu;//辅导的学生
};
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); teacher t;
    t.id=10000;
    t.name="老王";
    t.age=50;
    t.stu.name="小王";
    t.stu.age=18;
    t.stu.score=99;
    cout<<"老师信息： "<<endl;
    cout<<"工号： "<<t.id<<"姓名： "<<t.name<<"年龄： "<<t.age<<endl;
    cout<<"学生信息： "<<endl;
    cout<<"姓名： "<<t.stu.name<<"年龄： "<<t.stu.age<<"分数： "<<t.stu.score<<endl;
}
    