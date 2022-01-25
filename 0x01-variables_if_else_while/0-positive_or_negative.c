/**
 * main - program startup
(*
 * Description: assigns a random number to the variable `n` each execution
 * and prints whether the number stored in `n` is positive or negative)?
 * Return: return (0) is the required function signature
 */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
