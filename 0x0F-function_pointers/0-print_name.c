/**
 * print_name - program startup
 * @name: char being evaluated
 * @f: function being evaluated
(*
 * Description: prints a name)?
 * Return: return (0) is the required function signature
 */

#include "function_pointers.h"
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
