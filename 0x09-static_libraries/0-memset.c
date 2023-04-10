#include "main.h"

/**
 * _memset - func
 * @s: a - Variable
 * @b: b - variable
 * @n: c - variable
 * Return: return
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

