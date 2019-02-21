/**
 * File              : vc_strsub.c
 * Author            : Juan, Danilo, Paulo, Kazuya and Enrique
 * Date              : Wed 20 Jan 2019
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument.
 * The substring begins at start and is of size len. If start and len aren’t refering to a valid
 * substring, the behavior is undefined. If the allocation fails, the function returns NULL.
 * @param s
 * @param start
 * @param len
 * @return
 */
char *vc_strsub(char const *s, size_t start, size_t len) {
    char *var = malloc(len + 1);
    int i;

    if (var != NULL) {
        for (i = 0; i < len; i++) {
            *(var + i) = *(s + start - 1);
            s++;
        }
        *(var + i) = '\0';
        return var;
    }
    return NULL;
}


