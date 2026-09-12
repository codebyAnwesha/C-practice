#include<stdio.h>
void quicksort(int array[], int low, int high, int full_size);
int partition(int array[], int low, int high, int full_size);
void swap(int *a, int *b);
void printArray(int array[], int size);
int main() {
    int data[] = {6, 4, 7, 8, 1, 9, 5};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Original Array: ");
    printArray(data, size);
    printf("---------------------------------------\n");
    quicksort(data, 0, size - 1, size); 
    printf("---------------------------------------\n");
    printf("Final Sorted Array: ");
    printArray(data, size);
    return 0;
}
void quicksort(int array[], int low, int high, int full_size) {
    if (low < high) {
        int pi = partition(array, low, high, full_size);
        quicksort(array, low, pi - 1, full_size);
        quicksort(array, pi + 1, high, full_size);
    }
}
int partition(int array[], int low, int high, int full_size) {
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    printf("Array after processing pivot [%d]: ", pivot);
    printArray(array, full_size);
    return (i + 1);
}
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
        printf("\n");
}