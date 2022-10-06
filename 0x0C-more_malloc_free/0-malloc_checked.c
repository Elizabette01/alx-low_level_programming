#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory to be allocated
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
