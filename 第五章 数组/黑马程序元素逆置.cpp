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
    int end=sizeof(arr)/sizeof(arr[0])-1;
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