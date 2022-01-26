/**
 * print_alphabet - program startup
(*
 * Description: prints the alphabet in lowercase)?
 */

#include "main.h"
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
