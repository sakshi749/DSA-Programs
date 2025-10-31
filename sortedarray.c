//created by sakshi
#include <stdio.h>
#include <stdlib.h>
int* mergeSortedArrays(const int* arr1, int size1, const int* arr2, int size2, int* mergedSize) {
    int* mergedArray = (int*)malloc((size1 + size2) * sizeof(int));
    if (mergedArray == NULL) {
        *mergedSize = 0;
        return NULL;
    }
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArray[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArray[k++] = arr2[j++];
    }
    *mergedSize = k;
    return mergedArray;
}
int main() {
    int arr1[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 6, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedSize;
    int* mergedArray = mergeSortedArrays(arr1, size1, arr2, size2, &mergedSize);
    if (mergedArray != NULL) 
    {
        printf("Merged Array: ");
        for (int i = 0; i < mergedSize; ++i) {
            printf("%d ", mergedArray[i]);
        }
        free(mergedArray);
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
