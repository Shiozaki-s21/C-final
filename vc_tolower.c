
#include <stdio.h>

char *vc_tolower(char *str)
{

	int i = 0;

	//char nStr[50];
	char *nStr = malloc(256);

	for (i; str[i] != '\0'; i++)
	{
		nStr[i] = str[i];
	}
	nStr[i] = '\0';

	i = 0;
	for (i; nStr[i] != '\0'; i++)
	{
		if (nStr[i] >= 'A' && nStr[i] <= 'Z')
		{
			nStr[i] += 32;
		}
	}

	return nStr;

}

