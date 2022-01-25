/**
 * main - program startup
(*
 * Description: prints the alphabet in lowercase and in reverse)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar ('\n');
	return (0);
}
