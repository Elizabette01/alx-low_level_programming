#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: resulting string
 * @src: source string
 * @n: Limit of the cat
 * Return: a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);

}

