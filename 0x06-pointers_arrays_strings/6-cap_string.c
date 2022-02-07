/**
 * *cap_string - program startup
 * @a: pointer being evaluated
 * (*
 * Description: capitalizes all words of a string)?
 * Return: return (0) is the required function signature
 */

#include "holberton.h"
char *cap_string(char *a)
{
	int string;

	for (string = 0; a[string] != '\0'; string++)
	{
		if (a[string] >= 'a' && a[string] <= 'z')
		{
			if (a[string - 1] == ' ' ||
					a[string - 1] == '\t' ||
					a[string - 1] == '\n' ||
					a[string - 1] == ',' ||
					a[string - 1] == ';' ||
					a[string - 1] == '.' ||
					a[string - 1] == '!' ||
					a[string - 1] == '?' ||
					a[string - 1] == '"' ||
					a[string - 1] == '(' ||
					a[string - 1] == ')' ||
					a[string - 1] == '{' ||
					a[string - 1] == '}' ||
					string == 0)
			{
				a[string] = a[string] - 32;
			}
		}
	}
	return (a);
}
