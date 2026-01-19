#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int i;
	for(i=0;i<4;i++)
	{
		printf("%d ",*(arr+i));
	}
	return 0;
}
