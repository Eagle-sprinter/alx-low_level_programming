#include<stdio.h>
/**
 * main - print all arguments
 * @argc:number of comma line
 * @argv:array that contain the program.
 * Return: (0) success.
 */
int main(int argc, char *argv[]) {
    int i;

    for (i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
