#include<stdio.h>
int main()
{
	int m,n,r,temp_m,temp_n;
	temp_m=m;
	temp_n=n;
	scanf("%d,%d",&m,&n);
	if(m<n)
	{
		r=m;m=n;n=r;
	}
		r=m%n;
	while(r!=0)
	{
		m=n;n=r;r=m%n;
		}
		printf("最大公约数是 %d\n",n);
int lcm=(temp_m*temp_n)/n;
printf("最小公倍数是 %d\n",lcm);
	return 0;
}
