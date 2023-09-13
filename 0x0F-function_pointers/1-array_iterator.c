#include"function_pointers.h"
/**
 * array_iterator - iterates trhough the array
 * @array: target
 * @size: array size
 * @action: function tp arrray
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
