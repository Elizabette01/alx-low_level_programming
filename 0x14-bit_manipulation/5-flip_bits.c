#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the number
 * @m: The number to flip n to
 *
 * Return: the number of bits to flip to go from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, b = 0;

	while (xor > 0)
	{
		b += (xor & 1);
		xor >>= 1;
	}
	return (b);
}
