#include "main.h"

/**
 * closer - closes the file
 * @fd: file to close
 * Return: void
 */

void closer(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * argccheck - makes sure argc = 3
 * @argc: paramaters passed in CLI
 *
 */

void argccheck(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
	}
}

/**
 * main - copies from one file to another
 * @argc: arguments passed
 * @argv: files to be copied
 * Return: 1 if success
 */

int main(int argc, char *argv[])
{

	int fromfile, tofile, writefile;
	char buffer[1024];

	argccheck(argc);
	fromfile = open(argv[1], O_RDONLY);
	if (fromfile == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	tofile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (tofile == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	while ((writefile = read(fromfile, buffer, 1024)) != 0)
	{
		if (writefile == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
		if (write(tofile, buffer, writefile) != writefile)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	closer(fromfile);
	closer(tofile);

	return (0);
}
