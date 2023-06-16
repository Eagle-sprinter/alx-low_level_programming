#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator with current time

    int n = rand() % 201 - 100; // Generate a random number between -100 and 100

    printf("The number %d is ", n);
    if (n > 0) {
        printf("positive");
    } else if (n == 0) {
        printf("zero");
    } else {
        printf("negative");
    }
    printf("\n");

    return 0;
}

