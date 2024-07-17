#include <string.h>
#include "3-calc.h"
/**
  * get_op_func - ...
  * @s: ...
  * Return: ...
  */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t myop[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod}
	};
	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
