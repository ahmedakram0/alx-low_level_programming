#include "main.h"

/**
 * swap_int - check the code.
 * @a: param
 * @b: param
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

