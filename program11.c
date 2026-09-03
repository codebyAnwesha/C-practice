#include<stdio.h>
int binarySearch(int arr[],int size,int key){
    int low=0,high=size-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        else if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return -1;
}
void display(int res, int key){
    if(res!=-1) printf("%d found\n",key,res);
    else printf("%d not found\n",key);
}
    void run(){
        int arr[]={10,20,30,40,50};
        int size=5; 
        int key=40;
        display(binarySearch(arr,size,key),key);
    }
    int main(){
        run();
        return 0;
    }