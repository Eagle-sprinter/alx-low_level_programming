#include"main.h"

/**
 * _strlen_recursion _ calculate the length of a string
 * @s: the string count
 *
 * Return:nothing
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
