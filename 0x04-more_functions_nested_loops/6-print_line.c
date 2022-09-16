#include "main.h"
/**
 * print_line - Draws a straight line using a character _
 * @n: The number of _ characters to be printed out
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}