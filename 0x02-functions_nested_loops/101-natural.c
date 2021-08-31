#include <stdio.h>

/**
 * main - print sum of multiples of 3 or 5 below 1024
 * Return: 0
 */

int main(void)
{
	int sum;
	int n;

	sum = 0;
	n = 3;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
		n++;
	}
	printf("%d\n", sum);

	return (0);
}
