#include<stdio.h>
int main(){
    int age=25;
    int *p=&age;
    int **pp=&p;
    printf("%d,%d,%d",age,*p,**pp);
    (*p)++;
    printf("%d,%d",age,**pp);
    **pp+=10;
    printf("%d,%d,%d",age,*p,**pp);
    int x=50;
    *pp=&x;
    printf("%d,%d,%d",x,*p,**pp);
    (*p)-=5;
    printf("%d,%d,%d",x,*p,**pp);
    printf("%d,%d",age,x);
    return 0;
}