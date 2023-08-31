#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find square root of.
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return (sqrt_check(n, 0));
}

/**
 * sqrt_check - Recursive helper function to find the square root.
 * @a: The number to find square root of.
 * @b: The current guess.
 * Return: The square root of n, or -1 if not found.
 */
int sqrt_check(int a, int b)
{
    if (b * b == a)
    {
        return (b);
}
else if (b * b > a)
{
	return -1;
	}
    return (sqrt_check(a, b + 1));
}
