/**
 * *_strstr - program startup
 * @haystack: first pointer being evaluated
 * @needle: second pointer being evaluated
(*
 * Description: locates a substring)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	int byte;
	int string;

	for (byte = 0; haystack[byte] != '\0'; byte++)
	{
		for (string = 0; needle[string] != '\0'; string++)
		{
			if (haystack[byte + string] != needle[string])
			{
				break;
			}
		}
		if (!needle[string])
		{
			return (&haystack[byte]);
		}

	}
	return (NULL);
}
