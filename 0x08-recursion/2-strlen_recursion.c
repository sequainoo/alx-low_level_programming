/**
 * _strlen_recursion - Gets the length of a string
 * @s: the string to measure
 * Return: the length as integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
