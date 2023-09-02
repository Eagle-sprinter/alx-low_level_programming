#include<stdio.h>
/**
 * main - prints the number of arguements
 * @argc: number of command
 * @argv:array 
 * Return: (0) success
 */
int main(int argc, char **argv __attribute__ ((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
