#include "main.h"

/**
 * _strcmp - func
 * @s1: a - Variable
 * @s2: b variable
 * Return: return
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		char diff = s1[i] - s2[i];

		if (diff != 0)
			return (diff);
	}

	if (s1[i] != '\0')
		return (s1[i]);

	if (s2[i] != '\0')
		return (-s2[i]);

	return (0);
}

