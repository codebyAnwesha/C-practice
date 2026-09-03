#include<stdio.h>
void bubbleSort(int array[],int size);
int main(){
  int data[]={6,4,7,8,1,9,5};
  int size=sizeof(data)/sizeof(data[0]);
  printf("Original Array:");
  for(int i=0; i<size; i++) printf("%d",data[i]);
  printf("\n\n---Internal Steps(Passes)---\n");
  bubbleSort(data,size);
  printf("\nFinal Sorted Array:");
  for(int i=0; i<size; i++) printf("%d",data[i]);
  printf("\n");
  return 0;
}
void bubbleSort(int array[],int size){
  for(int step=0; step<size-1; ++step){
    for(int i=0; i<size-step-1;++i){
      if(array[i]>array[i+1]){
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
      }
    }
    printf("Pass%d:",step+1);
    for(int k=0; k<size; k++){
      printf("%d",array[k]);
    }
    printf("\n");
  }
}