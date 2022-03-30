#include <stdlib.h>
#include <stdio.h>

/**
 *  linear_search - searches for a valie in an array of integers
 *  @array: the array to search throud
 *  @size: size of the array
 *  @value: the value to search for
 *  Return: index of found entry or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

