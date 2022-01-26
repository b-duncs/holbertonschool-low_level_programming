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
	int product;

	for (length = 0; length <= 9; length++)
	{
		putchar('0);
		for (height = 0; height <= 9; height++)
		{
			product = length * width;
			putchar(',');
			putchar(' ');
			if (product <= 9)
			{
				putchar(' ');
			}
			else
			{
				putchar((product / 10) + '0');
			}
			putchar((product % 10) + '0');
		}
	putchar('\n');
	}
}
