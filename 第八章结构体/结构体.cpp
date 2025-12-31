#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//1.创建学生的数据类型：学生包括（姓名，年龄，分数）
//自定义数据类型，一些类型集合组成的一个类型


struct Student
{
    //成员列表

    //姓名
string name;
    //年龄
int age;
    //分数
int score;    
}s3;//顺便赋值

//2.通过学生类型创建具体学生
//2.1 struct Student s1
//2.2 struct Student s2={}
//2.3 在定义的时候顺便创建
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 


struct Student s1;
//给s1属性赋值，通过.访问
s1.name="张三";
s1.age=19;
s1.score=100;

cout<<"姓名： "<<s1.name<<"年龄： "<<s1.age<<"分数： "<<s1.score;
//2.2 struct Student s2={ }
struct Student s2={"李四",19,80};
cout<<"姓名： "<<s2.name<<"年龄： "<<s2.age<<"分数： "<<s2.score;
s3.name="王五";
s3.age=19;
s3.score=90;
cout<<"姓名： "<<s3.name<<"年龄： "<<s3.age<<"分数： "<<s3.score;
}