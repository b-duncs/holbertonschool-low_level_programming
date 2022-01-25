/**
 * main - program startup
(*
 * Description: prints the alphabet in lowercase and uppercase)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	char alpha;
	char ALPHA;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 'A'; ALPHA <= 'Z'; ALPHA++)
	{
		putchar(ALPHA);
	}
	return (0);
}
