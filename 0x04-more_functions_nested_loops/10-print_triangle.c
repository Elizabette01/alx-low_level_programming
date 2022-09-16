#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: the parameter
 **/
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
