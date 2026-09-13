#include<stdio.h>
void finishSorting(int arr[10]){
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int arr[10]={50,20,40,10,80,30,70,90,60,5};
    int j,temp;
    printf("Original Array:");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(j=0;j<9;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    printf("Intermediate Array(After 1 pass:");
    for(int i=0;i<10;i++){
        printf("%d" ,arr[i]);
    }
    printf("\n");
    finishSorting(arr);
    printf("Final Sorted Array:");
    for(int i=0;i<10;i++){
        printf("%d" ,arr[i]);
    }
    printf("\n");
    return 0;
}