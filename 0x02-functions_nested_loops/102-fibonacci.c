#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int fn;
	long previous;
	long current;
	long next;
	int i;

	previous = 1;
	current = 2;
	fn = 50;
	next = 0;
	i = 3;

	printf("%li, %li, ", previous, current);

	while (i <= fn)
	{
		next = previous + current;
		previous = current;
		current = next;
		printf("%li, ", current);
		i++;
	}
	printf("\n");

	return (0);
}
