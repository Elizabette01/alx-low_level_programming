#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: sring
 * Return: returns length as integer;
 */

int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}
