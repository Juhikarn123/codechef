#include <stdio.h>
#include <stdlib.h>

// Comparator function for qsort
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int arraySize, targetDifference, *numbers;

    // Input: array size and target difference
    scanf("%d%d", &arraySize, &targetDifference);

    // Allocate memory for the array
    numbers = (int *)malloc(arraySize * sizeof(int));

    // Input: array elements
    for (int i = 0; i < arraySize; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array
    qsort(numbers, arraySize, sizeof(int), compare);

    int startIndex = 0, endIndex = 1, totalCount = 0;

    // Count pairs with a difference greater than or equal to the target
    while (startIndex < arraySize && endIndex < arraySize) {
        if (numbers[endIndex] - numbers[startIndex] >= targetDifference) {
            totalCount += arraySize - endIndex;
            startIndex++;
        } else {
            endIndex++;
        }
    }

    // Output: total count of pairs
    printf("%d\n", totalCount);

    // Free allocated memory
    free(numbers);
    
    return 0;
}
