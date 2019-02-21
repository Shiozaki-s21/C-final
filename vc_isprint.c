#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

int vc_isprint(int character)
{
    // characters under 32 is not printable
    if (character > 31 && character < 128)
    {
        return 1;
    }
    return 0;
}