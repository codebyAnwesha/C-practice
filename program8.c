#include<stdio.h>
void insert(int arr[],int *size,int pos,int item){
    for(int i=*size; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=item;
    (*size)++;
}
void display(int arr[],int size){
for(int i=0; i<size; i++){
    printf("%d",arr[i]);
}
printf("\n");
}
int main(){
    int arr[10]={10,20,30,40,50};
    int size=5;
    int pos=2; 
    int item=99;
    printf("Before:");
    display(arr, size);
    insert(arr,&size,pos,item);
    printf("After:");
    display(arr,size);
    return 0;
}