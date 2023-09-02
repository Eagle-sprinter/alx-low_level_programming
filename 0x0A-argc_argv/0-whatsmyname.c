#include<stdio.h>

/**
 * main - prints its name
 *
 * @argc:number of command arguemts.
 * @argv:arary that contains the command line
 *
 * return:(0) when success
 */
int main (int argc __attribute__((unused)), char *argv[])
{
  	printf("%s\n", argv[0]);
	return (0);
}
