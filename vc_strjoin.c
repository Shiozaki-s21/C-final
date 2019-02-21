#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

char *vc_strjoin(char const *s1, char const *s2)
{
    int s1Size = 0;
    int s2Size = 0;
    for (s1Size; s1[s1Size]; ++s1Size)
        ;
    for (s2Size; s2[s2Size]; ++s2Size)
        ;

    char *r = malloc(sizeof(char) * (s1Size + s2Size));
    for (int i = 0; i < s1Size; ++i)
    {
        r[i] = s1[i];
    }
    for (int i = s1Size; i < (s1Size + s2Size); ++i)
    {
        r[i] = s2[i - s1Size];
    }
    return r;
}
