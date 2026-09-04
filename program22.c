#include<stdio.h>
void printArray(int arr[], int n){
  for(int i=0; i<n; i++) printf("%d",arr[i]);
  printf("\n");
}
int main(){
  int arr[]={64,34,25,12,22,11,90};
  int n=sizeof(arr)/sizeof(arr[0]);
  int start=0, end=n-1, pass=1;
  printf("Initial Array:");
  printArray(arr,n);
  while(start<end){
    int min_idx=start, max_idx=start;
    for(int i=start+1; i<=end; i++){
      if(arr[i]<arr[min_idx]) min_idx=i;
      if(arr[i]>arr[max_idx]) max_idx=i;
    }
    int temp=arr[start];
    arr[start]=arr[min_idx];
    arr[min_idx]=temp;
    if(max_idx==start) max_idx=min_idx;
    temp=arr[end];
    arr[end]=arr[max_idx];
    arr[max_idx]=temp;
    printf("After pass %d:",pass++);
    printArray(arr,n);
    start++;
    end--;
  }
  return 0;
}