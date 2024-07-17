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
	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, myop[i].op) == 0)
		{
			return (myop[i].f);
		}
	}
	return (0);
}
