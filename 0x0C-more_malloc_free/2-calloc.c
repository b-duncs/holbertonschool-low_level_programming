/**
 * *_calloc - program startup
 * @nmemb: first int being evaluated
 * @size: second int being evaluated
(*
 * Description: allocates memory for an array using malloc)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocmem;
	char *container;
	unsigned int string;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	allocmem = malloc(size * nmemb);
	if (allocmem == NULL)
	{
		return (NULL);
	}
	container = allocmem;
	for (string = 0; string < (size * nmemb); string++)
	{
		container[string] = '\0';
	}
	return (allocmem);
}
