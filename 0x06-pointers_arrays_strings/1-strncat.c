#include "main.h"

/**
 * _strncat - func
 * @dest: a - Variable
 * @src: b - variable
 * @n: c - variable
 * Return: return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

