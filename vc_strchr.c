/**
 * File              : vc_strchr.c
 * Author            : Juan, Danilo, Paulo, Kazuya and Enrique
 * Date              : Wed 20 Jan 2019
 */

#include <stdio.h>

/**
 * Searches for the first occurrence of the character c (an unsigned char)
 * in the string pointed to by the argument str
 * @param str
 * @param c
 * @return
 */
char *vc_strchr(const char *str, int c) {
    char *p;
    for (p = (char *) str; *p != '\0'; p++) {
        if (*p == c) {
            return p;
        }
    }
    return NULL;
}

