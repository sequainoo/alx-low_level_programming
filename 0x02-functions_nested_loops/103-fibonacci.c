#include <stdio.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	int fn;
	int previous;
	int current;
	int next;
	int i;
	int sum;

	previous = 1;
	sum = 2;
	current = 2;
	fn = 4000000;
	next = 0;
	i = 3;

	while (i <= fn)
	{
		next = previous + current;
		previous = current;
		current = next;
		if (current % 2 == 0)
			sum += current;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
