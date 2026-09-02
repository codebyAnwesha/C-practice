#include<stdio.h>
void display(int arr[],int size){
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
void deleteElement(int arr[], int *size, int pos){
    for(int i=pos; i<*size-1; i++){
        arr[i]=arr[i+1];
    }
    (*size)--;
}
int main(){
    int arr[20]={10,20,30,40,50};
    int size=5;
    int pos=2;
    printf("Before delete:\n");
    display(arr,size);
    deleteElement(arr, &size, pos);
    printf("After delete:\n");
    display(arr, size);
    return 0;
}