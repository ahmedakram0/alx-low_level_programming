#include <stdio.h>
#include "main.h"

/**
 * main - main func
 * @argc: a
 * @argv: b array
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0, num;
	char *str;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		str = argv[i];
		num = 0;

		if (str[0] != '\0' && str[0] == '-')
			j = 1;
		else
			j = 0;
		for (; str[j] != '\0'; j++)
		{
			if (str[j] < '0' || str[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (str[j] - 48);
		}
		if (str[0] == '-')
			num *= -1;
		res += num;
	}

	printf("%d\n", res);

	return (0);
}

