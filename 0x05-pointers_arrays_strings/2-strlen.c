#include "main.h"

/**
 * _strlen - check the code.
 * @s: param
 * Return: count
 */
int _strlen(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}

