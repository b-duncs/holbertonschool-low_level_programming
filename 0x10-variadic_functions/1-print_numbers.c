/**
 * print_numbers - program startup
 * @separator: char being evaluated
 * @n: int being evaluated
(*
 * Description: prints numbers followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int string;

	va_start(numbers, n);

	for (string = 0; string < n; string++)
	{
		printf("%d", va_arg(numbers, int));
		if (string != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
