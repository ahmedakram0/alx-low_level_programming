#include "main.h"

/**
 * reverse_array - func
 * @a: a - Variable
 * @n: b variable
 * Return: return
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}

