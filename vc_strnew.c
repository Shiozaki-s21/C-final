#include "pch.h"
#include "vc_strnew.h"
#include <stdio.h>


char *vc_strnew(size_t size) {

	char *memoryResult = (char *)malloc(size * sizeof(char));
	if (memoryResult != NULL) {
	
		for (int i = 0; i < size; i++) {
		
			memoryResult[i] = '\0';
		
		}

		return memoryResult;
	
	}
	return NULL;



}