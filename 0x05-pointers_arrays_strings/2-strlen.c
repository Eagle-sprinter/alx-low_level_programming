#include<stdio.h>

/**
 * _strlen - returns the length of the string.
 * @str: The string to get the length of
 * return: Thelenght of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while(*str++)
	length++;
	return (length);
}
