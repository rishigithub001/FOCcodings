#include <stdio.h>

#define MAX_SIZE 50

int main() {
    int arr[MAX_SIZE];
    int size, i;
    int maxElement, maxIndex;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    maxElement = arr[0];
    maxIndex = 0;

    for (i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }

    printf("Maximum element: %d\n", maxElement);
    printf("Index of maximum element: %d\n", maxIndex);

    return 0;
}

