/**
 * File              : vc_str_is_alpha.c
 * Author            : Juan and Enrique
 * Date              : Fri 08 Jan 2019
 */

#include <stdio.h>

int vc_isalpha(char *str) {

	for (int i = 0;str[i] != '\0'; i++) {
		
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
		
			return 0;

		}
	
	}
	return 1;
}
