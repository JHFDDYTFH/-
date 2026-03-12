#include <iostream>
using namespace std;

class C1
{
    int m_a;//默认权限是公共

};

struct C2
{
    int m_a;//默认权限是私有
};

int main()
{
    C1 c1;
    // c1.m_a=10; //错误，默认权限是私有
    C2 c2;
    c2.m_a=10;//正确，默认权限是公共
    return 0; 
}