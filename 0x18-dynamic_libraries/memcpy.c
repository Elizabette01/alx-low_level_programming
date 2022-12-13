#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: Pointer to the destination memory
 * @src: Pointer to the source memory
 * @n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
