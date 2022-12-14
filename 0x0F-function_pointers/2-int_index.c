/**
 * int_index - a function that searches for an integer
 * @array: array of integers
 * @size: number of elements in the array @array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of first element
 * -1 if no element is found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	ret = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (ret);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				ret = i;
				break;
			}
			if ((cmp(array[i]) == (-1)))
			{
				return (ret);
			}
		}
	}
	return (ret);
}
