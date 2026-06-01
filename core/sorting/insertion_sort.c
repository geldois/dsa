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

void
insertion_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1) {
		return;
	}

	for (size_t i_count = 1; i_count < size; i_count++) {
		int curr = array[i_count];
		size_t j_count = i_count;

		while (j_count > 0) {
			if (curr > array[j_count - 1]) {
				break;
			}

			array[j_count] = array[j_count - 1];
			j_count--;
		}

		array[j_count] = curr;
	}
}

void
print(int *array, size_t size)
{
	for (size_t i_count = 0; i_count < size; i_count++) {
		printf("%d ", array[i_count]);
	}

	printf("\n");
}

int
main(void)
{
}
