
#include <stdio.h>

char *vc_strtrim(char const *s) {
	
	char *start = NULL;
	char *end = NULL;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t') {
			if (start == NULL) {
				
				start = &(s[i]);
			
			}
			else {
			
				end = &(s[i]);
			
			}
		}
	}

	int resultStringSize = end - start;
	
	char *resultString = (char *)malloc(resultStringSize + 1);

	int i = 0;
	for (; start + i != end + 1; i++) {
	
		resultString[i] = *(start + i);
	
	}
	resultString[i] = '\0';
	
	return resultString;

}