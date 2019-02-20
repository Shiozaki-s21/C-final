/**
 * File              : vc_strdup.c
 * Author            : Juan and Kazuya
 * Date              : Tue 12 Feb 2019
 */
#include <stdlib.h>

char *vc_strdup(char *src){

    int k;
    for (k = 0; src[k] != '\0'; k++);

    char *c = malloc(sizeof(k +1));

    int i = 0;
    while (src[i] != '\0'){
        c[i] = src[i];
        i++;
    }
    return c;

}