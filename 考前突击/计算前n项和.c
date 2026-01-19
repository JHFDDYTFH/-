#include <stdio.h>
int main()
{
	//计算前n项的值
	 int n,i;
	 int sum=0;
	 scanf("%d",&n);
	 for( i=1;i<=n;i++)
	 {
	 	sum+=i;
	 }
	 printf("sum=%d\n",sum);
	 return 0;
}
