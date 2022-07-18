#include "main.h"

/**
 * read_textfile - program startup
 * @filename: text file
 * @letters: number of letters to read and print
(* Description: reads a text file and prints it to the POSIX standard output)?
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int nbyte;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	nbyte = read(file, buffer, letters);
}
