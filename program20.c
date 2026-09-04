#include<stdio.h>
void insertionSort(int array[], int size);
int main(){
  int data[] = {6,4,7,8,1,9,5};
  int size = sizeof(data)/sizeof(data[0]);
  insertionSort(data, size);
  printf("Sorted Array:\n");
  for(int i=0; i<size; i++){
    printf("%d", data[i]);
  }
}
void insertionSort(int array[], int size){
  for(int step=1; step<size; step++){
    int key=array[step];
    int j=step-1;
    while(j>=0 && key<array[j]){
      array[j+1]=array[j];
      --j;
    }
    array[j+1]=key;
  }
}