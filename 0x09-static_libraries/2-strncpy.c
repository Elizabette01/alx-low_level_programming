#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: Resulting string
 * @src: Source string
 * @n: The limit of the copy
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

