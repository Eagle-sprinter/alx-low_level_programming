#include "main.h"

/**
 * factorial - Gets the factorial of a number.
 * @n: The number of factorial.
 * Return: The factorial of n, or -1.
 */
int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
