#include <stddef.h> // For NULL

/**
 * Fills a string buffer with the given character.
 * - str: pointer to the string buffer
 * - str_len: total size of the buffer
 * - fill_char: character to fill
 * The string will be null-terminated if str_len > 0.
 * Returns the number of characters actually filled (excluding the null terminator).
 */
int string_fill(char *str, size_t str_len, char fill_char) { //num of char actually filled
    if (str == NULL || str_len == 0) return 0;

    size_t i;
    for (i = 0; i < str_len - 1; i++) { // leave space for null terminator, loop to fill elements
        str[i] = fill_char; // space for null terminator
    }
    str[i] = '\0'; // null-terminate

    return (int)i; // number of characters filled
}
