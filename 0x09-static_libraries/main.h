#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * strpbrk - strpbrk
 * @s: the character to check
 *@accept: string accept
 * return: an integer 1 or 0
 */

char *_strpbrk(char *s, char *accept);

/**
 * _memset - fill n bytes of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to be appended to
 * @src: string to append
 * @n: append n number of bytes(chars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

char *_strchr(char *s, char c);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * _strncpy - copies n bytes of a source into buffer of a destination string,
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * @n: n bytes to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _islower - checks for lowercase character
 * @c: character to check
 * Return: 1 if lowercase otherwise 0
 */

int _islower(int c);

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str);

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2);

/**
 * _strspn - return length of string that matches values consistently
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _isalpha - checks for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */

int _isalpha(int c);

/**
 * _strpbrk - return pointer to byte in s that matches a byte in accept
 * @s: string to search
 * @accept: target matches
 * Return: pointer to index of string at first occurence
 */

char *_strpbrk(char *s, char *accept);

#include "main.h"

/**
 * _abs - compute absolute value of integer
 * @n: integer argument
 * Return: absolute value
 */

int _abs(int n);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s);

/**
 * isdigit - test if a character is a digit
 * @c: the character to check
 * return: an integer 1 or 0
 */

int _isdigit(int c);

/**
 * is_upper - test if a character is an uppercase
 * @c: the character to check
 * return: an integer 1 or 0
 */

int _isupper(int c);

#endif
