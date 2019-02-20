#include "pch.h"
#include "vc_memalloc.h"
#include <stdlib.h>


void* vc_memalloc(size_t size) {

	void* result = malloc(size);
	if (result = NULL) {
		return NULL;
	}
	for (int i = 0; i < size; i++) {
		((char*)result)[i] = 0;
	}
	return result;
}
