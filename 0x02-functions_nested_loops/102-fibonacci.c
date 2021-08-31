#include <stdio.h>

/**
 * main - print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int fn = 50;
	int previous;
	int current;
	int next;
	int i;

	previous = 1;
	current = 2;
	next = 0;
	i = 3;

	printf("%d, %d, ", previous, current);

	while (i <= 50)
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
