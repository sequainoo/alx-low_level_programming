#include <stdio.h>

/**
 * _strcat - concatenates 2 strings
 * @*dest: destination string
 * @*src: Source string
 *
 * return: Pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (*(dest + j) != '\0')
		j++;

	while (*(src + i) != '\0')
	{
		*(dest + j) = *(src + i);
		++j;
		++i;
	}
	*(dest + j) = *(src + i);

	return (dest);
}
