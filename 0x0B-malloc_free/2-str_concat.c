#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * treat NULL passed as an empty string
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: pointer to newly allocated memory which has s1, s2 and null byte
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int length1, length2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length1 = 0;
	while (s1[length1] != '\0')
		length1++;

	length2 = 0;
	while (s2[length2] != '\0')
		length2++;

	size = length1 + length2;

	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < length1)
	{
		nstr[i] = s1[i];
		i++;
	}

	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}

	return (nstr);
}
