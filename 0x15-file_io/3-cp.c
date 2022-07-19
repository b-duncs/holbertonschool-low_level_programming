#include "main.h"

/**
 * main - program startup
 * @argc: argument count
 * @argv: argument vector
(* Description: copies the content of a file to another file)?
 * Return: return (0) is the required function signature
 */

char *new_buffer(char *file);
void close_file(int file);
int main(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int start, end, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = new_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	r = read(start, buffer, 1024);
	do {
		if (start == -1 | r == -1)
		{
			dprintf(STDERR_FILENO, 
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(end, buffer, r);
		if (end == -1 || w == -1)
		{
			dprint(STDERR_FILENO, 
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(start, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(start);
	close_file(end);

	return (0);
}

/**
 * new_buffer - program startup
 * @file: text file
(* Description: creates space for buffer)?
 * Return: buffer
 */

char *new_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprint(STDERR_FILENO, 
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - program startup
 * @file: text file
(* Description: closes the file
 */

void close_file(int file)
{
	int x;

	x = close(file);

	if (x == -1)
	{
		dprint(STDERR_FILENO, 
				"Error: Can't close fd %d\n", file);
		exit(100);
	}
}
