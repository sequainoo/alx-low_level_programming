#include <stdio.h>
#include <stdlib.h>

/**
 * min - fnds the minimum of two integers
 * @x: int 1
 * @y: inte 2
 * Return: int
 */
size_t min(size_t x, size_t y)
{
	if (x >= y)
		return (y);
	return (x);
}

/**
 * print_array - prints the array based on the boundaries
 * @array: array to print from
 * @l: lower bound of the array to print
 * @u: upper bound of array to print
 */
void print_array(int *array, size_t l, size_t u)
{
	printf("Searching in array: ");
	while (l < u)
	{
		printf("%d, ", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}

/**
 * binary_search - function searches a sorted array of integers
 * @array: array to search, sorted
 * @value: target element to search
 * @l: lower boundary
 * @u: upper boundary
 * Return: the index of the found item
 */
int binary_search(int *array, int value, size_t l, size_t u)
{
	size_t m;

	printf("Value found between index [%lu] and [%lu]\n", l, u);

	if (array)
		while (l <= u)
		{
			print_array(array, l, u);
			m = (l + u) / 2;
			if (array[m] > value)
			{
				u = m - 1;
				continue;
			}
			if (array[m] < value)
			{
				l = m + 1;
				continue;
			}
			return (m);

		}
	return (-1);
}

/**
 * exponential_search - exponential search algorithm in c
 * @array: array
 * @size: size
 * @value: value
 * Return: index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	/* find the range within which the key may be found */
	size_t bound;

	if (!array || size < 1)
		return (-1);

	bound = 1;

	printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	while (bound < size && array[bound] < value)
	{
		bound *= 2;
		if (bound < size)
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
	}
	return (binary_search(array, value, bound / 2, min(bound, size - 1)));
}

