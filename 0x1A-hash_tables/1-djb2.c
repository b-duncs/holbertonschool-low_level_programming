#include "hash_tables.h"

/**
 * hash_djb2 - program startup
 * @str: integer for string
(* Description: implements the djb2 algorithm)?
 * Return: return (0) is the required function signature
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x; /*hash * 33 + x */
	}

	return (hash);
}
