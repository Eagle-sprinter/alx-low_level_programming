#include "main.h"
/**
 *void _PUTS_Recursion - Function like puts/();
 * @s: INPUT
 * return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
