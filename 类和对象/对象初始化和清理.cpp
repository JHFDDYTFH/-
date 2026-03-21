#include <iostream>
#include <windows.h>
using namespace std;
//对象初始化和清理
//1、构造函数 进行初始化操作
class Person
{
   //1.1构造函数
   //没有返回值 不用写void
   //函数名 与类名相同
   //构造函数可以有参数 ，可以发生重载
   //创建对象的时候，构造函数会自己调用，且只调用一次
   public:
   Person()
   {
    cout<<"Person 构造函数的调用"<<endl;
   }
   //2、析构函数 进行清理的操作
   //没有返回值 不用写void
   //函数名和类名相同 前面加一个~符号
   //析构函数不能有参数 不可以发生重载
   //对象销毁的时候，析构函数会自己调用，且只调用一次
   ~Person()
   {
    cout<<"Person 析构函数的调用"<<endl;
   }

};
//构造和析构都是必须有的实现函数，构造函数进行对象的初始化，析构函数进行对象的清理操作
//2、析构函数 进行清理操作
void test01()
{
    Person p; //在栈上的数据，test01函数执行完毕，p对象也就销毁了
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001); 
    //Person p;
    test01();
    system("pause");
    return 0;

}