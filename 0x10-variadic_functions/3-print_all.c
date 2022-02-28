#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_all - program startup
 * @format: const being evaluated
(*
 * Description: prints anything)?
 * Return: return (0) is the required function signature
 */

void print_all(const char * const format, ...)
{
	va_list all;
	int x = 0, y = 0;
	char *separator = "";

	va_start(all, format);

	while (format && (*(format + i)))
	{
		y = 0;
		while (y < 4 
	}
}
