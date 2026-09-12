#include<stdio.h>
void mergesort(int arr[], int l, int r);
void merge(int arr[], int p, int q, int r);
int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Original Array:\n ");
    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);
    printf("\n\n--- Steps ---\n");
    mergesort(data, 0, size - 1);
    printf("\nSorted Array:\n ");
    for(int i = 0; i < size; i++)
        printf("%d ", data[i]);
    return 0;
}
void mergesort(int arr[], int l, int r) {
    if(l < r) {
        int m = l + (r - l) / 2;
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
        merge(arr, l, m, r);
        printf("Merged sub-array: ");
        for(int i = l; i <= r; i++) printf("%d ", arr[i]);
        printf("\n");
    }
}
void merge(int arr[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for(int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for(int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j]; 
    int i = 0, j = 0, K = p;
    while((i < n1) && (j < n2)) {
        if(L[i] <= M[j]) {
            arr[K] = L[i];
            i++;
        } else {
            arr[K] = M[j];
            j++;
        }
        K++;
    }
    while(i < n1) {
        arr[K] = L[i]; 
        i++;
        K++; 
    }
    while(j < n2) { 
        arr[K] = M[j]; 
        j++;
        K++; 
    }
}