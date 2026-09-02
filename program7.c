#include<stdio.h>
int main(){
    int arr1D[3]={10,20,30};
    int arr2D[2][2]={{1,2},{3,4}};
    int i,j;
    printf("Accessing 1D element:%d\n",arr1D[1]);
    printf("accessing 2D element:%d\n\n",arr2D[0][1]);
    printf("Traversing 1D array:\n");
    for(i=0; i<3; i++){
        printf("%d",arr1D[i]);
    }
    printf("\n\n");
    printf("traversing 2D array:\n");
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d", arr2D[i][j]);
        }
        printf("\n");
    }
    return 0;
}