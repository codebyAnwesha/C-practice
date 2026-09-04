#include<stdio.h>
void printArray(int array[],int size){
  for(int i=0; i<size; i++){
    printf("%d", array[i]);
  }
  printf("\n");
}
void modifiedBubbleSort(int array[], int n){
  printf("Initial Array:");
  printArray(array,n);
  printf("\n");
  for(int i=0; i<n-1; i++){
    int swapped=0;
    for(int j=0; j<n-i-1; j++){
      if(array[j]>array[j+1]){
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        swapped=1;
      }
    }
    printf("After pass %d:", i+1);
    printArray(array,n);
    if(swapped==0){
      printf("\nArray sorted early! Stopping code.\n");
      break;
    }
  }
}
int main(){
  int data[]={64,34,25,12,22,11,90};
  int size=sizeof(data)/sizeof(data[0]);
  modifiedBubbleSort(data, size);
  return 0;
}