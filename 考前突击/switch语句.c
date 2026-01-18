#include <stdio.h>
#include <windows.h> 
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 

    int score;
    char grade;

    printf("请输入成绩：");
    scanf("%d",&score);
    switch(score/10){
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
            grade = 'B';
            break;
        case 7:
            grade = 'C';
            break;
        case 6:
            grade = 'D';
            break;
        default:
            grade = 'E';
            break;
    }
    printf("成绩等级为：%c\n",grade);
    return 0;   
}