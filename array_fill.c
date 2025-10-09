/**
 * Fills an integer array with numbers from `begin` to `end`.
 * Stops if the array reaches its maximum length (`array_len`).
 * Returns the number of elements actually filled.
 */
int array_fill(int *array, int array_len, int begin, int end) { //# of elements written into array
    if (array_len <= 0) return 0; //if no space return 0

    int count = 0; //tracks elements
    int current = begin; //starting at begin current number

    while (current <= end && count < array_len) { //not past last number, not filled array
        array[count] = current; //current into array count
        count++; // increment count
        current++; //increment current, next num
    }

    return count;
}
