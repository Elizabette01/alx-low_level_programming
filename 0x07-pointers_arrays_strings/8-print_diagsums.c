#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to array
 * @size: size of array
 * Return: (0)
 */
void print_diagsums(int *a, int size)
{
	int i, multsize;
	unsigned int diag_sum1, diag_sum2;

	mulsize = 0;
	diag_sum1 = 0;
	diag_sum2 = 0;

	multsize = (size * size) - 1;

	for (i = 0; i <= multsize; i = i + (size + 1))
	{
		diag_sum1 = diag_sum1 + a[i];
	}
	for (i = (size - 1); i < multsize; i = i + (size - 1))
	{
		diag_sum2 = diag_sum2 + a[i];
	}
	printf("%d, %d\n", diag_sum1, diag_sum2);
}
