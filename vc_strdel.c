#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

void vc_strdel(char **as)
{
    free(as);
    as = NULL;
}