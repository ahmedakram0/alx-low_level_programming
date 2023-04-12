#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - func
 * @str: param
 * Return: string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *res;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	res = malloc(sizeof(char) * i + 1);

	if (res == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

