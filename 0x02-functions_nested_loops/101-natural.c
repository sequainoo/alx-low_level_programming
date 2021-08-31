#include <stdio.h>

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
	printf("%d", sum);

	return 0;
}
