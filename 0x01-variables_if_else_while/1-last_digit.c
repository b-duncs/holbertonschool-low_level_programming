/**
 * main - program startup
(*
 * Description: assigns a random number to the variable `n` each execution
 * and prints the last digit of the number stored in `n`)?
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
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
				n, (n % 10));
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n",
				n, (n % 10));
	}
	else if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, (n % 10));
	}
	return (0);
}
