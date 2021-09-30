#include <stdarg.h> /* va_* */
#include <stdio.h> /* printf */
#include "variadic_functions.h"

/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char* s;
	unsigned int i;
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		
		if (i < n-1)
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	printf("\n");
}
