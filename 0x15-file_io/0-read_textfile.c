#include "main.h"

/**
 * read_textfile - program startup
 * @filename: char being evaluated
 * @letters: list being evaluaed
(*
 * Description: reads a text file and prints it to the
 * `POSIX` standard output)?
 * Return: return (0) is the required function signature
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *temp = malloc(sizeof(char) * letters);
	ssize_t o = open(filename, O_RDONLY);
	ssize_t r = read(o, temp, letters);
	ssize_t w = write(STDOUT_FILENO, temp, r);

	if (filename == NULL)
	{
		return (0);
	}
	if (temp == NULL)
	{
		return (0);
	}
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(temp);
		return (0);
	}
	free(temp);
	close(o);
	return (w);
}
