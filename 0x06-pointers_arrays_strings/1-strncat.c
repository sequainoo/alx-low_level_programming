#include <stdio.h>

/**
 * _strcat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		++i;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		++i;
		++j;
	}
	*(dest + i) = '\0';
	return (dest);
}
