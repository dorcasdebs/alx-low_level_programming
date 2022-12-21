#include <stdio.h>
/**
 * main - entry
 * Return: nothing
 */

int main(void)
{
int y, z;
unsigned long a = 1;
unsigned long b = 1;
unsigned long sum = 0;
long a_head, a_tail, b_head, b_tail, sum_head, sum_tail;

printf("1");
for (y = 2; y < 93; y++)
{
	sum = a + b;
	a = b;
	b = sum;
	printf(", %lu", sum);
}

a_head = a / 1000000000; /* break larger num into 2 parts */
a_tail = a % 1000000000;
b_head = b / 1000000000;
for (; y < 99; y++)
{
	z = (a_tail + b_tail) / 1000000000;
	sum_tail = (a_tail + b_tail) - (1000000000 * z);
	sum_head = (a_head + b_head)+z;
	printf(", %lu%lu", sum_head, sum_tail);

	a_head = b_head;
	a_tail = b_tail;
	b_head = sum_head;
	b_tail = sum_tail;
}
printf("\n");
return (0);
}

