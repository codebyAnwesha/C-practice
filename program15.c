#include<stdio.h>
void traverseArray(int *p, int size){
  int i;
  printf("Array elementds:");
  for(i=0; i<size; i++){
    printf("%d",(*p+i));
  }
  printf("\n");
}
int main(){
  int arr[5]={10,20,30,40,50};
  traverseArray(arr,5);
  return 0;
}