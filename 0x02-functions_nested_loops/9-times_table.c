/**
 * times_table - program startup
(*
 * Description: prints the nine times table starting with zero)?
 */

#include "main.h"
void times_table(void)
{
	int length;
	int height;

	for (length = 0; length <= 9; length++)
	{
		for (height = 0; height <= 9; height++)
		{
			if (height <= (height - 1))
			{
				_putchar(length * height);
				putchar(',');
				putchar(' ');
			}
			else
			{
				_putchar(length * height);
				putchar(',');
				putchar(' ');
			}
		}
	printf("\n");
	}
}
