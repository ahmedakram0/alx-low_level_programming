#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - func
 * @array: param a
 * @size: param b
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || !array || !cmp)
		return (i);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1):
}

