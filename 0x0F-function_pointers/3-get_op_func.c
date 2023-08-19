#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - gets the operator function
 * @s: operation to perform
 *
 * Return: pointer to the required function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);

		i++;
	}

	return (0);
}
