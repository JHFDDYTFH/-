#include <iostream>
using namespace std;
int main()
{//冒泡排序
      int arry[10]={3,2,5,7,8,6,4,1,9,0};
      cout<<"original array:"<<endl;
      for(int i=0;i<10;i++)
      {
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    //开始冒泡排序
    //总共排序轮数为元素个数-1
    for(int i=0;i<10-1;i++)
    {
        //内层循环对比 次数=元素个数-当前轮数-1
        for(int j=0;j<10-i-1;j++)
        {
            if(arry[j]>arry[j+1])
            {
                //交换
                int temp=arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;
            }
        }
    }
cout<<"sorted array:"<<endl;
for(int i=0;i<10;i++)
{
    cout<<arry[i]<<" ";

}
    }