/**
 * File              : vc_isascii.c
 * Author            : Juan, Danilo, Paulo, Kazuya and Enrique
 * Date              : Wed 20 Jan 2019
 */

#include <stdio.h>

/**
 * The isascii() function shall return non-zero if c is a 7-bit US-ASCII
 * character code between 0 and octal 0177 inclusive; otherwise, it shall return 0.
 * @param character
 * @return
 */
int vc_isascii(int *character) {
    if ((character >= 0) && (character <= 127)) {
        return 1;
    }

    // If is not an ASCII character return 0
    return 0;
}
