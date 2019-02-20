/**
 * File              : vc_strlcat.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int i = 0;
    for (i = 0; i < size && src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    dest[i] = '\0';
    return i;
}

int main() {
    char dest[35] = "VANCOUVER";
    char str[24] = "abababababababababababa";
    int size = 30;
    printf("%d\n", vc_strlcat(dest, str, size));
    printf("%s", dest);
    return 0;
}
