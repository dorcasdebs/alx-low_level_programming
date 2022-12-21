#include <stdio.h>
/**
 * main - entry
 * Return: nothing
 */

int main(void)
{
	int y = 2;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	printf("%ld, %ld, ", a, b);
	while (y < 50)
	{
		printf("%ld", c);
		y++;
		a = b;
		b = c;
		c = a + b;
		if (y < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

