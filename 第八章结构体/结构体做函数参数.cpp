#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
struct student
{
    string name;
    int age;
    int score;
};
//打印学生信息的函数
//1.值传递
void printStudent(struct student s)
{
    s.age=100;//修改形参的值不会影响实参
    cout<<"子函数中 姓名： "<<s.name<<"年龄： "<<s.age<<"分数： "<<
    s.score<<endl;
}
//2.地址传递
void printStudentByAddress(struct student* p)
{
    p->age=200;//修改形参的值会影响实参
    cout<<"子函数中 姓名： "<<p->name<<"年龄： "<<p->age<<"分数： "<<
    p->score<<endl;
}
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    struct student s;
    s.name="张三";
    s.age=18;   
    s.score=100;
    //cout<<"姓名： "<<s.name<<"年龄： "<<s.age<<"分数： "<<
 //   s.score<<endl;
    //调用打印学生信息的函数
    printStudent(s);
    //printStudentByAddress(&s);
    return 0;  
}