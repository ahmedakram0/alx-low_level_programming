#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main func
 * @argc: a
 * @argv: b array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int res = 0, num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] != '\0' && argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (num >= 25)
	{
		res += num / 25;
		num %= 25;
	}
	if (num >= 10)
	{
		res += num / 10;
		num %= 10;
	}
	if (num >= 5)
	{
		res += num / 5;
		num %= 5;
	}
	if (num >= 2)
	{
		res += num / 2;
		num %= 2;
	}
	if (num > 0)
		res++;
	printf("%d\n", res);
	return (0);
}

