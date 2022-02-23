/**
 * free_dog - program startup
 * @d: struct being evaluated
(*
 * Description: frees dogs)?
 * Return: return (0) is the required function signature
 */

#include "dog.h"
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
