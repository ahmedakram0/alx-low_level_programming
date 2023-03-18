#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char c = 'a';

	while (c < 'a' + 26)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
