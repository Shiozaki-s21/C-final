/**
 * File              : vc_strcat.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

char *vc_strcat(char *dest, char *src) {
    int location = 0;
    for (int i = 0; dest[i] != '\0'; ++i) {
        location++;
    }
    for (int i = 0; src[i] != '\0'; ++i) {
        dest[location] = src[i];
        location++;
    }
    dest[location] = '\0';
    return dest;
}

int main() {
    char dest[35] = "VANCOUVER";
    char str[16] = "HELLO";
    vc_strcat(dest, str);
    printf("%s", dest);
    return 0;
}