#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - prints the array based on the boundaries
 * @array: array to print from
 * @l: lower bound of the array to print
 * @u: upper bound of array to print
 */
void print_array(int *array, int l, int u)
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
 * @size: size of array
 * @value: target element to search
 * Return: the index of the found item
 */
int binary_search(int *array, size_t size, int value)
{
	int l, u, m;

	l = 0, u = (int) size - 1;

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
