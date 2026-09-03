#include<stdio.h>
void linearSearch(int *arr, int n, int target);
  int main(){
    int arr[]={5,7,2,3,9,1,8};
    int n=7;
    int target=9;
    linearSearch(arr, n, target);
    return 0;
  }
void linearSearch(int *arr, int n, int target){
  int found=0;
  for(int i=0; i<n; i++){
    if(*(arr+i)==target){
      printf("Found at index %d\n",i);
      found=1;
      break;
    }
  }
  if (found==0){
    printf("Not found\n");
  }
}