#include <stdio.h>
#include <math.h>

/**
 * main - Prime numbers
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	int divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%id\n", larg_prim);
	return (0);
}
