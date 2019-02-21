 #include "pch.h"
#include "vc_memchr.h"


void *vc_memchr(const void *s, int c, size_t n) {

	for (int i = 0; i < n; i++) {

		if (((char *)s)[i] == c) {
		
			return &(((char *)s)[i]);

		}

	}

	return NULL;

}
