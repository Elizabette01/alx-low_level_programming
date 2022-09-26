#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 * @s: A pointer to the block of memory to fill
 * @b: constant byte value o be set
 * @n: size of byte to be set to the value
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
       
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
