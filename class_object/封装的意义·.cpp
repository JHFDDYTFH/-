#include <iostream>
#include <windows.h>
using namespace std;
//圆周率
const double PI = 3.14;
//设计一个圆类，包含成员变量半径和成员函数求圆的面积和周长
//圆求周长;2*3.14*半径

//clase 代表设计一个类
class Circle
{
    //访问权限
    //公共权限
    public:

    //属性
    //半径
    int m_r;
    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main()
{

    //创建对象
    Circle c1;
    //给圆对象的属性进行赋值
    c1.m_r=10;
    cout<<"The cicle's radius is "<<c1.m_r<<endl;
    cout<<"The circle's circumference is "<<c1.calculateZC()<<endl;
    return 0;
}