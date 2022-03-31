#include <math.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * l_search - does line search on sub array
 * @array: to search
 * @size: size of array
 * @lower: lower boundary
 * @upper: upper boundary
 * @value: value to look for
 * Return: index of found element or -1
 */
int l_search(int *array, size_t size, int lower, int upper, int value)
{
	if (upper >= (int) size)
	{
		upper = size - 1;
		printf("Value checked array[%d] = [%d]\n", lower, array[lower]);
		if (array[upper] < value)
			return (-1);
	}
	while (lower <= upper)
	{
		printf("Value checked array[%d] = [%d]\n", lower, array[lower]);
		if (array[lower] == value)
		{
			return (lower);
		}
		++lower;
	}
	return (-1);
}

/**
 * jump_search - searches a sorted array jumping blocks
 * @array: a pointer to the array to search
 * @size: size of array
 * @value: value to search for
 * Return: an interger indicating the index of found value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int interval = (int) sqrt(size);
	int lower = 0;
	int upper = interval;

	if (!array || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", lower, array[lower]);
	if (array[lower] > value)
	{
		return (-1);
	}

	while (array[upper] < value)
	{
		printf("Value checked array[%d] = [%d]\n", upper, array[upper]);
		lower += interval;
		upper += interval;

		if (upper >= (int) size)
		{
			break;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", lower, upper);
	return (l_search(array, size, lower, upper, value));
}

