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
	product = (length * width);

	for (length = 0; length <= 9; length++)
	{
		for (height = 0; height <= 9; height++)
		{
			if (height <= (height - 1))
			{
				putchar(product);
				putchar(',');
				putchar(' ');
			}
			else
			{
				putchar(product);
				putchar(',');
				putchar(' ');
			}
		}
	printf("\n");
	}
}
