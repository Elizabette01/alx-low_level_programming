#include "main.h"
/**
 * *_strcpy - function that copies string pointed to by src
 * to the buffer pointed to by dest
 * @src: pointer to str (origin)
 * @dest: pointer to the buffer
 * Return: half the input
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	(*(dest + len) = '\0');

	return (dest);
}

