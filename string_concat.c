#include <stddef.h>

/**
 * Appends `src2` to the end of `src1` without exceeding src1_cap.
 * Always null-terminates src1.
 * Does nothing if src1 or src2 is NULL, or if src1_cap <= 0.
 */
void string_concat(char* src1, int src1_cap, const char* src2) { //destination string, max num
    if (!src1 || !src2 || src1_cap <= 0) return;

    // Find the current length of src1 (up to src1_cap - 1)
    int len1 = 0;
    while (len1 < src1_cap - 1 && src1[len1] != '\0') { //loop until null or max
        len1++;
    }

    // Append src2
    int i = 0;
    while (len1 < src1_cap - 1 && src2[i] != '\0') { //copy char, stop iff
        src1[len1++] = src2[i++];
    }

    // Null-terminate
    src1[len1] = '\0';
}
