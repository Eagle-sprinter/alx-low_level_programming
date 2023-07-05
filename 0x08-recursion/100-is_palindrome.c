#include"main.h"

/**
 * _str
/**
 * is_palindrome - detects if a string is palindrome
 * @s:string.
 * Return: 1 if is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
