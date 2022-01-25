/**
 * main - program startup
(*
 * Description: prints all possible combinations of single-digit numbers)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
