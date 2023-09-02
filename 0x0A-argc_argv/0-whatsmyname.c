#include<stdio.h>

/**
 * main - prints its name
 *
 * @argc:number of command arguemts.
 * @argv:arary that contains the command line
 *
 * return:(0) when success
 */
int main (int argc , char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
