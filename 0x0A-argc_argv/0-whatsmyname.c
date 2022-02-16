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
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
