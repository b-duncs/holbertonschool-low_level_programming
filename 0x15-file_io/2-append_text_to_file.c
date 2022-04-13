#include "main.h"

/**
 * append_text_to_file - program startup
 * @filename: first char being evaluated
 * @text_content: second char being evaluaed
(*
 * Description: appends text at the end of a file)?
 * Return: return (0) is the required function signature
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int o = open(filename, O_WRONLY | O_APPEND);
	int w = write(o, text_content, length);

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
