#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum when given unknown amount of arguments
 * @n: integers to add
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum, i;
	va_list args;
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	return (sum);
}
