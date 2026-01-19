#include <stdio.h>
int main()
{
    float a[10]={1,2,7,5,1.8,1.6,0.8,4,1.0,6,2.2};
    float sum=0.0,avg=0.0;
    int i=0;
	for(i=0;i<10;i++)
	{
		sum+=a[i];
	}
	avg=sum/10;
	printf("平均数是%f\n",avg);
	for(i=0;i<10;i++)
	{
		if(a[i]<avg)
		printf("%f\n",a[i]);
	}
	return 0;

}
