#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

void vc_bzero(void *value, size_t sizeOfvalue)
{
    char *valuePointer = value;
    size_t i;
    for (i = 0; i < sizeOfvalue; ++i)
    {
        valuePointer[i] = '\0';
    }
}