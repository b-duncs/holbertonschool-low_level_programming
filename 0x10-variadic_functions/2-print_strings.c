/**
 * print_strings - program startup
 * @separator: char being evaluated
 * @n: int being evaluated
(*
 * Description: prints strings followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *array;
	unsigned int string;

	va_start(strings, n);

	for (string = 0; string < n; string++)
	{
		array = va_arg(strings, char *);
		if (array == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", array);
		}
		if (string != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strings);
}
