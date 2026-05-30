/*
 * INSIGHT
 * largest numbers bubble up to the end one at a time
 * swapped flag enables early-exit for nearly sorted arrays
 *
 * COMPLEXITY
 * time: Θ(n) [best] | Θ(n²) [average/worst]
 * space: Θ(1) [auxiliary]
 *
 * PROPERTIES
 * comparison-based | in-place | iterative | stable
 */

#include <stdbool.h>
#include <stdio.h>

void bubble_sort(int *array, size_t size) {
    if (array == NULL || size <= 1) {
        return;
    }

    for (size_t i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (size_t j = 0; j < size - 1 - i; j++) {
            int curr = array[j];
            int next = array[j + 1];

            if (curr > next) {
                array[j] = next;
                array[j + 1] = curr;

                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }
}

void print(int *array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");
}

int main() {}
