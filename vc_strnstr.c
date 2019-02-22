#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *vc_strnstr(const char *haystack, const char *needle, size_t len)
{
    // variables
    int count = 0;
    int pointerForNeedle = 0;
    int i = 0 ;

    // to count how many character does needle have
    int needleLength = 0;
    for(; needle[needleLength] != '\0'; needleLength++);

    // if needle is empty, return haystack
    if(needleLength == 0) return haystack;

    // create while for increasing counter when  counter less than len
    while(i < len) {
        // comparing haystack with needle
        if((int)haystack[i] == (int)needle[pointerForNeedle]) {
            // True:increase counter and pointer for needle
            count++;
            pointerForNeedle++;            
        } else {
            // else: counter go to 0
            count = 0;
            pointerForNeedle = 0;
        }

        // if counter is same as len return pointer i - count;
        if(count == needleLength) {
            count--;
            return &haystack[i - count];
        }
        i++;
    }

    // if needle was not find in haystack, return NULL
    return NULL;
}
