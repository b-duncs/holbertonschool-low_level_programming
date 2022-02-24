#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - program startup
 * @a: first int  being evaluated
 * @b: second int  being evaluated
(*
 * Description: returns the sum of a and b)?
 * Return: return (0) is the required function signature
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - program startup
 * @a: first int  being evaluated
 * @b: second int  being evaluated
(*
 * Description: returns the difference of a and b)?
 * Return: return (0) is the required function signature
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - program startup
 * @a: first int  being evaluated
 * @b: second int  being evaluated
(*
 * Description: returns the product of a and b)?
 * Return: return (0) is the required function signature
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - program startup
 * @a: first int  being evaluated
 * @b: second int  being evaluated
(*
 * Description: returns the result of the division of a by b)?
 * Return: return (0) is the required function signature
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - program startup
 * @a: first int  being evaluated
 * @b: second int  being evaluated
(*
 * Description: returns the remainder of the division of a by b)?
 * Return: return (0) is the required function signature
 */

int op_mod(int a, int b)
{
	return (a % b);
}
