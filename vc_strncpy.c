
#include <stdio.h>



char *vc_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	for (i; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return dest;
}