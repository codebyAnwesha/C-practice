#include <stdio.h>

// Simple Bubble Sort function to sort a section of the array downwards
void bubbleSort(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        for (int j = start; j < end; j++) {
            if (arr[j] < arr[j + 1]) { // Swap for descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // 1. Initial array of 9 elements (extra room kept for insertion)
    int arr[10] = {12, 35, 7, 19, 44, 5, 88, 3, 27};
    int target = 50; 
    int mid = 4; // Middle index of 9 elements

    // 2. Check if it's already in the middle
    if (arr[mid] == target) {
        printf("Found right in the middle at index %d\n", mid);
    } 
    // 3. If not found, insert it into the middle
    else {
        // Shift right-side elements over by one spot
        for (int i = 9; i > mid; i--) {
            arr[i] = arr[i - 1];
        }
        arr[mid] = target; // Insert target in the middle position

        // 4. Sort the left side (indices 0 to 3)
        bubbleSort(arr, 0, mid - 1);

        // 5. Sort the right side (indices 5 to 9)
        bubbleSort(arr, mid + 1, 9);

        // Print final result
        printf("Final Array: ");
        for (int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}