
#include <stdio.h>

static int compare_char_set(char c, char *charset) {

	for (int i = 0; charset[i] != '\0'; i++) {
		if (c == charset[i]) {
		
			return 1;
		
		}
	}
	return 0;
}

static char *vc_strdup(char *src) {

	int k;
	for (k = 0; src[k] != '\0'; k++);

	char *c = malloc(sizeof(k + 1));

	int i = 0;
	while (src[i] != '\0') {
		c[i] = src[i];
		i++;
	}
	c[i] = '\0';
	return c;

}

char **vc_strsplit(char *str, char *charset) {

	int currentlength = 0;
	int num_str = 1;
	for (int i = 0; str[i] != '\0'; i++) {
		if (compare_char_set(str[i], charset) && currentlength > 0) {
			num_str++;
			currentlength = 0;
		}
		else {
			currentlength++;
		}
	}

	char *mstr = vc_strdup(str);
	char **result = (char **)malloc((num_str + 1) * sizeof(char*));
	int current_result = 0;

	currentlength = 0;
	for (int i = 0; mstr[i] != '\0'; i++) {
		if (compare_char_set(mstr[i], charset)) {
			mstr[i] = '\0';
			currentlength = 0;
		}
		else if (!compare_char_set(mstr[i], charset) && currentlength == 0) {
			result[current_result] = &mstr[i];
			current_result++;
			currentlength++;
		}
		else {
			currentlength++;
		}
	}
	result[current_result] = NULL;

	return result;

}