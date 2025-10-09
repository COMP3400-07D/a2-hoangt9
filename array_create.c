#include <stddef.h>
#include <stdlib.h>

/**
 * Creates an array of even integers from `begin` to `end` (inclusive).
 * Allocates memory using malloc. Returns pointer to new array.
 * Returns NULL if allocation fails or no even numbers in range.
 */
int* array_create_evens(int begin, int end) {
    // Count how many even numbers there are
    int count = 0;
    for (int i = begin; i <= end; i++) {
        if (i % 2 == 0) count++;
    }

    if (count == 0) return NULL; // no even return null

    int* evens = malloc(count * sizeof(int)); //allocate space for count int
    if (!evens) return NULL;

    int idx = 0;
    for (int i = begin; i <= end; i++) { //loops through adds only even num
        if (i % 2 == 0) evens[idx++] = i;
    }

    return evens;
}
