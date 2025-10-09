#include <stddef.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * Checks if a password is valid:
 * - Length between 6 and 10 characters inclusive
 * - Only letters and digits allowed
 * - At least 2 lowercase letters
 * - At least 2 uppercase letters
 * Returns true if valid, false otherwise.
 */
bool valid_password(const char* s) { //check string
    if (s == NULL) return false; //if none, invalid

    int len = 0; //total num
    int lower = 0; //lowercase
    int upper = 0; //uppercase
    const char *p = s; //pointer through string

    while (*p) {
        if (islower((unsigned char)*p)) lower++;
        else if (isupper((unsigned char)*p)) upper++;
        else if (!isdigit((unsigned char)*p)) return false; // invalid character
//loop until null terminator \0, if lowercase inc, if uppercase inc
        len++;
        if (len > 10) return false; //inc len if >10
        p++;
    }

    if (len < 6) return false; //at least 6 char
    if (lower < 2 || upper < 2) return false; //at least 2 upper and lower

    return true;
}
