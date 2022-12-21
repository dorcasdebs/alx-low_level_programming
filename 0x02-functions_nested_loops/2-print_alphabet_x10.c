#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int cnt;

	for (cnt = 1; cnt <= 10; cnt++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
