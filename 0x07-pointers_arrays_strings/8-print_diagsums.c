/**
 * print_diagsums - program startup
 * @a: pointer being evaluated
 * @size: int being evaluated
(*
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_diagsums(int *a, int size)
{
	int sum;
	unsigned int x = 0;
	unsigned int y = 0;

	for (sum = 0; sum < size; sum++)
	{
		x = x + a[(size * sum) + sum];
		y = y + a[(size * (sum + 1)) - (sum + 1)];
	}
	printf("%d, %d\n", x, y);
}
