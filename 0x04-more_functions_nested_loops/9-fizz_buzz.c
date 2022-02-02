/**
 * main - program startup
(*
 * Description: standard fizzbuzz program)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (((x % 3) == 0) && ((x % 5) == 0))
		{
			printf(" FizzBuzz");
		}
		else if ((x % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", x);
		}
	}
	putchar('\n');
	return (0);
}
