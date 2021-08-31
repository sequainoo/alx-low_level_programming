#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int fn;
	int previous;
	int current;
	int next;
	int i;

	previous = 1;
	current = 2;
	fn = 50;
	next = 0;
	i = 3;

	printf("%d, %d, ", previous, current);

	while (i <= fn)
	{
		next = previous + current;
		previous = current;
		current = next;
		printf("%d, ", current);
		i++;
	}
	printf("\n");

	return (0);
}
