#include <stdio.h>
int main()
{
    for(int i=100; i<=200;i++)
    {
        for(int j=2;j<=i;j++)
        if(i%j==0&&j!=i)
        {
            break;
        }
        else
        {
            printf("%d ",i);
            break;
        }
    }
    return 0;
}