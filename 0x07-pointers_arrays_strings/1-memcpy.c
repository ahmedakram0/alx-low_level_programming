#include "main.h"

/**
 * _memcpy - func
 * @dest: a - Variable
 * @src: b - variable
 * @n: c - variable
 * Return: return
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

