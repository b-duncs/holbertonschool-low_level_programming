/**
 * _strlen_recursion - program startup
 * @s: pointer being evaluated
(*
 * Description: returns the length of a string)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1); 
	}
	return (0);
}
