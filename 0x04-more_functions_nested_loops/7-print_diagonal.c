#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character is printed
 */
void print_diagonal(int n);
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			if (i == (n - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
}
