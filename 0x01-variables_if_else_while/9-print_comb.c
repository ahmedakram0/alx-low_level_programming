#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 *
 */

int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

