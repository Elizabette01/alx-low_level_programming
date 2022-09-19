#include "main.h"
/**
 * swap_int - functions that swaps the values of two integers
 * @: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
