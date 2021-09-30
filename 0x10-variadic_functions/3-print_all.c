#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints char
 * @ap: ap
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - prints int
 * @ap: ap
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - prints float
 * @ap: ap
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - prints string
 * @ap: ap
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print varying input of ints, chars, floats, and strings
 * @format: an array of chars signifying which data type to print
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	datatype_object  type_objects[] ={ {'c', print_char}, 
					{'i', print_int}, 
					{'f', print_float},
					{'s', print_string},
					{'\0', NULL} };
	va_start(ap, format);
	i = 0;

	while (format[i])
	{
		j = 0;
		while (type_objects[j].letter != '\0')
		{
			if (format[i] == type_objects[j].letter)
			{
				type_objects[j].func(ap);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
