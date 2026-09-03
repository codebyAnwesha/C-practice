#include<stdio.h>
int binarySearch(int arr[],int low,int high,int key){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binarySearch(arr,mid+1,high,key);
    }
    else{
        return binarySearch(arr,low,mid-1,key);
         }
    }
    int main(){
        int arr[]={10,20,30,40,50};
        int size=5;
        int key=40;
        int result=binarySearch(arr,0,size-1,key);
        if(result!=-1){
            printf("Element found at index %d\n",result);
               }
               else{
                printf("Element not found at index %d\n",result);
               }
               return 0;
    }