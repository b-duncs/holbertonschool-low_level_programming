/**
 * main - program startup
(*
 * Description: prints all single digit numbers of base 10 starting from `0`)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 10; base10++)
	{
		printf("%i\n", base10);
	}
	return (0);
}
