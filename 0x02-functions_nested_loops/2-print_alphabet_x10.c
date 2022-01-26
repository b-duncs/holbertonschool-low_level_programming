/**
 * print_alphabet_x10 - program startup
(*
 * Description: prints the alphabet in lowercase ten times)?
 */

#include "main.h"
void print_alphabet_x10(void)
{
	int stepper;
	char alpha;

	for (stepper = 0; stepper <= 9; stepper++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
