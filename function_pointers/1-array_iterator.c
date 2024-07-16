#include "function_pointers.h"
/**
  * array_iterator - Prints a name
  * @array: array
  * @size: size_t
  * @action: function pointer
  * Return: Nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i <= size; i++)
	{
	action(array[i]);
	}
}
