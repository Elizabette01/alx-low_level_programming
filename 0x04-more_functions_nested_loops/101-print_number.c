#include <stdio.h>
#include "main.h"

/**
 * print_number - print a number
 * @n: the number to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	putchar((num % 10) + '0');
}
