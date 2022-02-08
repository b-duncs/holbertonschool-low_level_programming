/**
 * print_chessboard - program startup
 * @a: pointer being evaluated
(*
 * Description: prints the chessboard)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void print_chessboard(char (*a)[8])
{
	int length;
	int height;

	for (length = 0; a[length][7]; length++)
	{
		for (height = 0; height < 8; height++)
		{
			_putchar(a[length][height]);
		}
		_putchar('\n');
	}
}
