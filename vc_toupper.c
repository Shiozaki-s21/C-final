/**
* File              : vc_strupcase.c
* Author            : Juan Valencia, Hao-tse
* Date              : Thursday Feb 07 2019
*/

#include <stdio.h>

char *vc_toupper(char *str)
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
		if (nStr[i] >= 'a' && nStr[i] <= 'z')
		{
			nStr[i] -= 32;
		}
	}

	return nStr;

}

/*

int main()
{

	char *str = "Ahello";
	printf("%s", vc_strupcase(str));
	
}
*/