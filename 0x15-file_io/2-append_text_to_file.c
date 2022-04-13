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
	int open = open(filename, O_WRONGLY | O_APPEND);
	int write = write(o, text_content, len);
	int length;

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	if (open == -1 || write == -1)
	{
		return (-1);
	}
	close(open);
	return (1);
}
