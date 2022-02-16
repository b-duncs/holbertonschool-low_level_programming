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
	int product;

	if (argc == 3)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
