#include"main.h"

/**
 * _memcpy - a fucntion that copies memory area
 * @dest:memory where si stored 
 * @src:memory where is copied
 * @n:number of bytes
 *
 * Return:coiped memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int r = 0;
int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
