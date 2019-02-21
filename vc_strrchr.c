/**
 * File              : vc_strrchr.c
 * Author            : Juan, Danilo, Paulo, Kazuya and Enrique
 * Date              : Wed 20 Jan 2019
 */

#include <stdio.h>

/**
 * Searches for the last occurrence of the character c (an unsigned char)
 * in the string pointed to, by the argument str
 * @param str
 * @param c
 * @return
 */
char *vc_strrchr(const char *str, int c) {
    int i, j, k;
    for (i = 0; str[i] != '\0'; i++) {
        //finding length of a string
    }
    for (j = i - 1; j >= 0; j--) {
        if (str[j] == c) {
            for (k = j; k < i; k++) {
                printf("%c", str[k]);
            }
            return 0;
        }
    }
}



