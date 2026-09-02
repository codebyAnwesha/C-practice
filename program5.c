#include<stdio.h>
int factorial(int n){
    if(n==0 || n==1){
    return 1;
}
    return(n*factorial(n-1));
}
int main(){
    int a=5;
    printf("%d != %d", a, factorial(a));
}
