#include"main.h"

/**
 * print_triangle - prints a triangle, followed by  anew line
 * @size: siz eof triangle
 */
void print_triangle(int size)
{
	for (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}

			_putchar('\n');
		}
	}
}
