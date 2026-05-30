/*
 * INSIGHT
 * shifts larger elements right to open space for the current element
 *
 * COMPLEXITY
 * time: Θ(n) [best] | Θ(n²) [average/worst]
 * space: Θ(1) [auxiliary]
 *
 * PROPERTIES
 * comparison-based | in-place | iterative | stable
 */

#include <stdio.h>

void insertion_sort(int *array, size_t size) {
    if (array == NULL || size <= 1) {
        return;
    }

    for (size_t i = 1; i < size; i++) {
        int curr = array[i];
        int j = i;

        while (j > 0) {
            if (curr > array[j - 1]) {
                break;
            }

            array[j] = array[j - 1];
            j--;
        }

        array[j] = curr;
    }
}

void print(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main() {}
