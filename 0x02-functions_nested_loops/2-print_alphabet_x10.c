#include "main.h"

/**
 * print_alphabet_x10 - print all x10
 *
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	int count = 10;
	int i;
	char c;

	for (i = 0; i < count; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
