#include "hash_tables.h"

/**
 * key_index - program startup
 * @key: character for key
 * @size: integer for size
(* Description: gives the index of a key)?
 * Return: return (0) is the required function signature
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
