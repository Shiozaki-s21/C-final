#include "pch.h"
#include "vc_memdel.h"
#include <stdio.h>

void vc_memdel(void **ap) {
	free(ap);
	ap = NULL;
}
