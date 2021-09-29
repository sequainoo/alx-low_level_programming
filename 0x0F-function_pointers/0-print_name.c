/**
 * print_name - a function that prints a name
 * @name: name to print that will be given to f
 * @f: a function pointer that prints name:
 */

void print_name (char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
