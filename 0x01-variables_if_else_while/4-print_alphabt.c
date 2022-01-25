/**
 * main - program startup
(*
 * Description: prints the alphabet in lowercase
 * prints all letters except `q` and `e`)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha != 'q'; alpha != 'e'; alpha++)
	{
		putchar(alpha);
	}
	putchar ('\n');
	return (0);
}
