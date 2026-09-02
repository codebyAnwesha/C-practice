#include<stdio.h>
int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
void displayResult(int index, int key){
    if(index != -1){
        printf("Success:element %d found at index %d.\n", key, index);
    }
    else{
        printf("Failure:element %d not found at index %d\n",key);
    }
}
void runProgram(){
    int arr[]={12,45,7,91,30};
    int size=5;
    int key=91;
    int resultIndex=linearSearch(arr,size,key);
    displayResult(resultIndex,key);
}
int main(){
    runProgram();
    return 0;
}