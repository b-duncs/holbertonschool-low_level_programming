/**
 * main - program startup
(*
 * Description: assigns a random number to the variable `n` each execution
 * and prints whether the number stored in `n` is positive or negative)?
 * Return: return (0) is the required function signature
 */

#include <stdio.h>
#include <time.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is positive");
	}
	else if (n == 0)
	{
		printf("is zero");
	}
	else if (n > 0)
	{
		printf("is negative");
	}
	return (0);
}
