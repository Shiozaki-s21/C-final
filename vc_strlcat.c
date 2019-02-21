

#include <stdio.h>

unsigned int vc_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int i = 0;
    for (i = 0; i < size && src[i] != '\0'; ++i) {
        dest[i] = src[i];
    }

    dest[i] = '\0';
    return i;
}


