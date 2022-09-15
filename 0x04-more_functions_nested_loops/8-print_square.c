#include "main.h"
/**
 * print_square - Functions that print squares
 * @size: Argument in the parameter
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - 1); j++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
