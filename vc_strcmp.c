/**
  * File              : vc_strcmp.c
  * Author            : Juan Valencia, Hao-tse
  * Date              : Thursday Feb 07 2019
  */

#include <stdio.h>

int vc_strcmp(char *s1, char *s2) {

	int s1_total = 0;
	int s2_total = 0;

	int iterator = 0;

	while (s1[iterator] != '\0') {
		s1_total += s1[iterator];
		iterator++;
	}

	iterator = 0;

	while (s2[iterator] != '\0') {
		s2_total += s2[iterator];
		iterator++;
	}
	
	if (s1_total > s2_total) {
		return 1;
	}else if (s1_total < s2_total) {
		return -1;
	}

	return 0;
}