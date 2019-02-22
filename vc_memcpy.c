#include<stdlib.h>
#include<stdio.h>

void *vc_memmove(void *dst, const void *src, size_t len) {

    char *c1 = dst;
    char *c2 = src;
    // make while to count len
    while(0 < len--) {
        c1[len] = c2[len];
        
    }

    // return dest as a result
    dst = c1;
    return dst;
}