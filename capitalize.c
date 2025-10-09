#include <stddef.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Returns a new string which is a capitalized version of `s`.
 * Allocates memory for the new string.
 * Capitalizes all alphabetic characters; other characters stay unchanged.
 * Returns NULL if input is NULL or allocation fails.
 */
char* capitalize(const char* s) { 
    if (s == NULL) return NULL;

    // Determine the length of s
    size_t len = 0;
    while (s[len] != '\0') len++;

    // Allocate memory for the new string (+1 for null terminator)
    char* result = (char*)malloc(len + 1);
    if (result == NULL) return NULL;

    // Copy and capitalize each character
    for (size_t i = 0; i < len; i++) {
        if (isalpha((unsigned char)s[i])) { //checks if letter
            result[i] = toupper((unsigned char)s[i]); //to uppercase, avoid neg char values
        } else {
            result[i] = s[i];
        }
    }

    result[len] = '\0';
    return result;
}
