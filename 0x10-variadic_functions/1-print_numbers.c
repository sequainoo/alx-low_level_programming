#include <stdarg.h> /* va_* */
#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_numbers - print varying amount of numbers
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	if (separator == NULL)
		return ;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < (n-1))
			printf("%s", separator);
	}
	va_end(args);
	
	printf("\n");
}
