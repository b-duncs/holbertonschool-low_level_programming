/**
 * times_table - program startup
(*
 * Description: prints the nine times table starting with zero)?
 */

#include "main.h"
void times_table(void)
{
	int width;
	int length;

	for (width = 0; width <= 9; width++)
	{
		for (length = 0; length <= 9; length++)
		{
			if (length <= (length - 1))
			{
				putchar(length * width);
				if (length != 9 && width != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			else
			{
				putchar(length * width);
				if (length != 9 && width != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	printf("\n");
	}
}
