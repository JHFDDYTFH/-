#include <iostream>
#include <windows.h>
using namespace std;
//深拷贝和浅拷贝
class Person
{
    public:
    Person()
    {
       cout<<"Person 默认构造函数的调用"<<endl;
    }
    Person(int age,int height)
    {
        cout<<"Person 有参构造函数的调用"<<endl;
        m_Age = age;
        m_Height = new int(height);
    }
    int m_Age;
    int *m_Height;//身高
    ~Person()
    {
        //析构代码，将堆区开辟的数据做释放
        cout<<"Person 析构函数的调用"<<endl;
        if(m_Height!=NULL)
        {
            delete m_Height;
            m_Height=NULL;
        }
    }           
};
void test01()
{
    Person p1(20,160);
    
    cout<<"p1的年龄为:"<<p1.m_Age<<endl;
    cout<<"p1的身高为:"<<*p1.m_Height<<endl;
    
    cout<<"p1的年龄为:"<<p1.m_Age<<endl;
    Person p2(p1);
    cout<<"p2的年龄为:"<<p2.m_Age<<endl;
    cout<<"p2的身高为:"<<*p2.m_Height<<endl;
}
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001); 
    test01();
    return 0;
}