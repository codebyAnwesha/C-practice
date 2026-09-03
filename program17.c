#include<stdio.h>
int main(){
  int choice;
  int base_address,element_size,total_rows,total_cols;
  int i,j,final_address;
  printf("Enter Base Address(B):");
  scanf("%d",&base_address);
  printf("Enter Element size in bytes(w):");
  scanf("%d",&element_size);
  printf("Enter Total Rows(R)and Columns(C):");
  scanf("%d,%d",&total_rows,&total_cols);
  printf("Enter target index i and j to find address of A[i][j]:");
  scanf("%d,%d",&i,&j);
  printf("\nChoose Memory Representation:\n");
  printf("press 1 for row\n");
  printf("press 2 for column\n");
  printf("Enter choice:");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    final_address=base_address+element_size*(i*total_cols+j);
    printf("\n---Row-Major Order Calculation---\n");
    printf("Address of A[%d][%d]=%d\n",i,j,final_address);
    break;
    case 2:
    final_address=base_address+element_size*(j*total_rows+i);
    printf("\n---Column-Major Order Calculation---\n");
    printf("Address of A[%d][%d]=%d\n",i,j,final_address);
    break;
    default:
    printf("\nInvalid Selection!Use 1 or 2.\n");
  }
  return 0;
}