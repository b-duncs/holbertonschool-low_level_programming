/**
 * main - program startup
 * @argc: argument count
 * @argv: argument vector
(*
 * Description: prints its own program name followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
int main(int argc, char *argv[])
{
	int x;
	int y;
	int sum;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
