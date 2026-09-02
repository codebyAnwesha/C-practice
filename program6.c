#include<stdio.h>
#include<string.h>
int main(){
    char dsName [20];
    printf("Enter name(Array, LL, Tree, Graph):");
    scanf("%s", dsName);
    if(strcmp(dsName,"Array") ==0 || strcmp(dsName,"LL") ==0){
        printf("%s is a LINEAR Data Structure.\n",dsName);
    }
    else if(strcmp(dsName,"Tree")==0 || strcmp(dsName,"Graph")==0){
        printf("%s is a NON-LINEAR DAta Structure.\n",dsName);
    }
    else{
        printf("Unknown Data Structure !\n");
    }
    return 0;
}