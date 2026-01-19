#include<stdio.h>
int main ()
{
	int i,j;
	for( i=100;i<200;i++)
	{
		int flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			printf("%d ",i);
		}
	}
return 0;
}
