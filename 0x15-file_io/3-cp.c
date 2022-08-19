#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stddef.h>
#include <string.h>
/**
 * main - Copies content of a file to another file
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 1 if successful, -1 if failed
 **/

int main(int argc, char *argv[])
{
	int fdfile1, fdfile2, cl, w, nchars = 1024;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fdfile1 = open(argv[1], O_RDONLY);
	fdfile2 = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	while (nchars == 1024)
	{
		nchars = read(fdfile1, buffer, 1024);
		if (nchars == -1 || fdfile1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fdfile2, buffer, nchars);
		if (fdfile2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	cl = close(fdfile1);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfile1);
		exit(100);
	}
	cl = close(fdfile2);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdfile2);
		exit(100);
	}
	return (0);
}
