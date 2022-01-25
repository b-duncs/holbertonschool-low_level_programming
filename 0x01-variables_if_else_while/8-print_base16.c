/**
 * main - program startup
(*
 * Description: prints all the numbers of base 16 in lowercase)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	int base16;
	char alpha;

	for (base16 = 0; base16 < 10; base16++)
	{
		putchar((base16 % 10) + '0');
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
