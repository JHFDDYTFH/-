#include<iostream>
#include<string>
#include <windows.h>
using namespace std;
//设计一个学生类，属性有姓名和学号；
//可以给姓名和学号赋值，可以显示学生的姓名和学号
//设计学生类
class Student
{
    public://公共权限
    //属性   成员属性 成员变量

    //类中属性和行为 统一称为 成员
    string m_name;//姓名
    int m_number;//学号
    //行为   成员函数 成员方法
    //显示学生的姓名和学号
    void showInfo()
    {
        cout<<"姓名："<<m_name<<endl;
        cout<<"学号："<<m_number<<endl;
    }
    //给姓名和学号赋值
    void setName(string name)
    {
        m_name=name;
    }
    //给学号赋值
    void setID(int number)
    {
        m_number=number;
    }
};

int main()
{
     SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //创建学生对象
    Student s1;
    //给学生对象的属性赋值
    s1.setID(1001);
    s1.setName("张三");
    //显示学生的姓名和学号
    s1.showInfo();

    Student s2;
    s2.setID(1002);
    s2.showInfo();
      
    

    Student s2;
    s2.m_number=1002;
    s2.m_name="李四";
    s2.showInfo();
    return 0;

}