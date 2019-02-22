#include<stdlib.h>
#include<stdio.h>

void *vc_memmove(void *dst, const void *src, size_t len) {

    char *c1 = dst;
    char *c2 = src;
    char tmp[len];
    
    for(int i = 0; i < len; i++) {
        tmp[i] = c2[i];
    }

    for(int i = 0; i < len; i++) {
        c1[i] = tmp[i];
    }    

    return dst;
}