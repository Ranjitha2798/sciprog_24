#include <stdio.h>
#include <stdlib.h>

int* allocatearray(int n) {
    int* p = (int*)malloc(n * sizeof(int));
    return p;
}

void fillwithones(int *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i] = 1;
    }
}

void printarray(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void freearray(int *p) {
    free(p);
}

int main() {
    int size, *array;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    array = allocatearray(size);
    fillwithones(array, size);
    printarray(array, size);
    freearray(array);

    return 0;
}

