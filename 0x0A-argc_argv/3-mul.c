#include <stdio.h>
#include "main.h"

/**
 * _atoi - func to convert str to int
 * @str: string
 *
 * Return: int
 */
int _atoi(char *str)
{
	int num = 0, i;

	if (str[0] != '\0' && str[0] == '-')
		i = 1;
	else
		i = 0;

	for (; str[i] != '\0'; i++)
	{
		num = num * 10 + (str[i] - 48);
	}

	if (str[0] == '-')
		num *= -1;

	return (num);
}

/**
 * main - main func
 * @argc: a
 * @argv: b array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	printf("%d\n", (a * b));

	return (0);
}

