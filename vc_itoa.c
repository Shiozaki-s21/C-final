#include <stdio.h>
#include <strings.h>
#include <ctype.h>
#include <stdlib.h>

char *vc_itoa(int number)
{
    int size = 0;
    int temp = number > 0 ? number : (number * -1);
    int negative = number < 0 ? 1 : 0;
    // get the size
    int pow = 1;
    while (temp > 0)
    {
        size++;
        temp = temp / 10;
        pow = pow * 10;
    }

    // return char
    char *r = malloc(sizeof(char) * (size + negative));
    temp = number > 0 ? number : (number * -1);
    if (negative == 1)
    {
        r[0] = '-';
    }
    for (int i = 0; pow > 1; ++i)
    {
        pow = pow / 10;
        int n = temp / pow;
        temp = temp % pow;
        r[i + negative] = n + '0';
    }
    return r;
}