#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"original array:"<<endl;
    for(int i=0;i<5;i++)
    {
//记录起始下标与结束下标
//起始下标与结束下标交换
        cout<<arr[i]<<" ";

    }
   

    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;//sizeof(arr) 用于计算整个整个数组 arr 所占的内存字节数。
                                         //sizeof(arr[0])/用于计算数组中单个元素所占的内存字节数。
                                         //两者相除 sizeof(arr) / sizeof(arr[0]) 得到的是数组的元素个数（长度）。
                                         //再减去 1，是因为数组的下标是从 0 开始计数的，所以最后一个元素的下标等于数组长度减 1。
     while(start<end){
    int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
//打印数组
cout<<"\nreversed array:"<<endl;
for(int i=0;i<5;i++)
{
    cout<<arr[i]<<" ";

}
return 0;
}