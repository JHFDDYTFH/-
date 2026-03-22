#include <iostream>
using namespace std;
//访问权限
//公共权限 public:成员类内可以访问  类外也可以访问
//保护权限 protected:成员类内可以访问  类外不可以访问  但是子类可以访问(继承)
//私有权限 private:成员类内可以访问  类外不可以访问  子类也不可以访问   

class Person 
{
    //公共权限
    public:
    string m_Name;

    protected:
    //保护权限
    string m_Car;//汽车

    private:
    //私有权限
     int m_Password;

     public:
     void func()
     {
        m_Name="张三";
        m_Car="奔驰";
        m_Password=123456;
     }
};
int main()
{
    //实例化具体对象
    Person p1;
    p1.m_Name= "李四";
    // p1.m_Car="宝马";  //错误，保护权限不能访问
    // p1.m_Password=654321; //错误，私有权限不能访问
}