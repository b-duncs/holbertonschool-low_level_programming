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

	for (width = 0; width <= 10; width++)
	{
		for (length = 0; length <= 10; length++)
		{
			if (length <= (length - 1))
			{
				printf("%i, ", (length * width));
			}
			else
			{
				printf("%i, ", (length * width));
			}
		}
	}
}
