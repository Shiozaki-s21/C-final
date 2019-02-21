/**
 * File              : vc_strmap.c
 * Author            : Juan, Danilo, Paulo, Kazuya and Enrique
 * Date              : Wed 20 Jan 2019
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Print the values of each time it call the function
 * @param s
 */
char printValue(char s) {
    putchar(s);
    return s + 1;
}

/**
 * Applies the function f to each character of the string given as argument to create a
 * “fresh” new string (with malloc(3)) resulting from the successive applications of f.
 * @param s
 * @param f
 * @return
 */
char *vc_strmap(char const *s, char (*f)(char)) {
    size_t size = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        size++;
    }
    char *result = (char *) malloc(size + 1);
    int i = 0;
    // If is a null pointer do nothing
    if (s) {
        // Begins the counter to sweep by each character of the string
        for (; s[i] != '\0'; i++) {
            // Takes the address of each character of the string, and pass it into the function f
            result[i] = (*f)(s[i]);
        }
    }
    result[i] = '\0';
    return result;
}


