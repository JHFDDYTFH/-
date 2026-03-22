#include <iostream>
#include <windows.h>

using namespace std;
//构造函数和析构函数的分类及调用
//1、构造函数分类
//按照参数分类 无参构造（默认构造函数）和有参构造
//按照类型分类 普通构造函数和拷贝构造函数
class Person
{
    public:
    //构造函数
    Person ()
    {
        cout<<"Person 无参构造函数的调用"<<endl;
    }
    Person (int a)
    {
        age=a;
        cout<<"Person 有参构造函数的调用"<<endl;
    }
    //拷贝构造函数
    Person(const Person & p)
    {
        cout<<"Person 拷贝构造函数的调用"<<endl;
        //将传入的人身上的所有属性拷贝过来
        age=p.age;
    }
    ~Person ()
    {
        cout<<"Person 析构函数的调用"<<endl;
    }
    int age;

};
//调用
void test01()
{
    
   //1、括号法
  // Person p1; //默认构造函数
   //Person p2(10); 
   //Person p3(p2);//有参构造函数
//Person p1();认为是函数声明，编译器会认为这是一个函数的声明，而不是对象的实例化，所以调用默认构造函数的时候，不要加（）

   //注意事项
   //调用默认构造函数的时候，不要加（）
;
   //cout<<"p2的年龄为:"<<p2.age<<endl;
   //cout<<"p3的年龄为:"<<p3.age<<endl;
  
   //2、显示法
//    Person p1;
//    Person p2=Person(10);
//    Person p3=Person(p2);
  // Person(10); //匿名对象，调用完就销毁了
  //注意事项2
  //不要利用拷贝构造函数来初始化匿名对象，因为匿名对象在使用完毕后会立即销毁，可能会导致一些问题
  //Person(p3);//会被认为是函数的声明

  //3、隐式转换法
  Person p4=10; //调用有参构造函数
  Person p5=p4; //调用拷贝构造函数
}
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001); 
    test01();
    return 0;
}