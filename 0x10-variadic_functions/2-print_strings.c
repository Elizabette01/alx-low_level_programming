#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - a finction that prints string
 * @separator: the string to be printed between the string
 * @n: the number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
