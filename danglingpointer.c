#include <stdio.h>
#include <stdlib.h>//created by sakshi
int *allocateMemory() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    free(ptr);
    free(ptr);

    return ptr;
}
int main() {
    int *danglingPtr = allocateMemory();
    printf("Value at danglingPtr: %d\n", *danglingPtr);
    return 0;
}
