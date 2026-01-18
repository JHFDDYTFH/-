#include <stdio.h>
int main(){
   int x=5;
int y=x++*x++;printf("%d\n%d",x,y);
    y=--y*--y;printf("\n%d\n%d",x,y);
return 0;

}
