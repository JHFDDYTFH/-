#include <iostream>
using namespace std;
#include "file2.cpp"
int main()
{
    extern int max(int,int);
int a,b;
cin>>a>>b;
cout<<max(a,b)<<endl;
return 0;
}