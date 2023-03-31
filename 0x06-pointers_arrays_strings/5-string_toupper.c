#include "main.h"

/**
 * string_toupper - func
 * @a: a - Variable
 * Return: return
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 97 && a[i] <= 97 + 25)
		{
			a[i] -= 97 - 65;
		}
		i++;
	}

	return (&a[0]);
}

