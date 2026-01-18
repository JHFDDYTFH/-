#include<stdio.h>
#include<windows.h>
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 

    int hour,money;
    printf("请输入工作时间：");
    scanf("%d",&hour);
    if(hour<=10){
    money=30;}
    else if(hour>10&&hour<40)
    {
      money=hour*3;
    }
    else{
        money=hour*2.5;
    }
    printf("%d\n",money);
    return 0;
}
