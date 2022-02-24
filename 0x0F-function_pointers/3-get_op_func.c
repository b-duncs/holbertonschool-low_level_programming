/**
 * get_op_function - program startup
 * @s: char being evaluated
(*
 * Description: selects the correct function to perform
 * the operation asked by the user)?
 * Return: return (0) is the required function signature
 */

#include "3-calc.h"
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
