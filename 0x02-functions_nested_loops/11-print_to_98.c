#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);
	
	while (n > 98)
		printf("%d, ",n--);
	printf("%d\n", 98);
	/*printf("\n");*/
}
