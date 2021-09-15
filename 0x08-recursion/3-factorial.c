/**
 * factorial - roduces factorial of a number
 * @n: the numer to get factorial of
 * Return: -1 if n is less than 0, 1 if n is 0 or 1 otherwise fac of n
 */

int factorial(int n)
{
	if (n < 0)
		return -1;
	if (n <= 1)
		return 1;

	return (n * factorial(n - 1));
}
