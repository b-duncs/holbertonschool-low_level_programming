/**
 * more_numbers - program startup
(*
 * Description: prints ten times the numbers `0` to `14` followed by a new line)?
 * Return: return (0) is the required function signature
 */

#include "main.h"
void more_numbers(void)
{
	int stepper;
	int number;
 
	for (stepper = '0'; stepper <= 9; stepper++)
	{
		for (number = '0'; number <= '14'; number++)
		{
			if (number <=9)
			{
				_putchar((number % 10) + '0');
			}
			else
			{
				_putchar((number / 10) + '0');
			}
		}
		_putchar('\n');
	}	
}
