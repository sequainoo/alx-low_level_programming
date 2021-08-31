#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);

	while (n > 98)
		printf("%d, ", n--);
	printf("%d\n", 98);
}
