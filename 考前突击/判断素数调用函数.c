#include <stdio.h>
int isPrime(int number)
{
	if(number<1)
	return 0;
	int i;
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int number;
	printf("请输入一个数 "); 
	scanf("%d",&number);
	int ret=isPrime(number);
	if(ret =0)
	{
		printf("%d不是素数",number);
	}
	else
	{
	printf("%d是素数",number);
	}
	return 0;
}
