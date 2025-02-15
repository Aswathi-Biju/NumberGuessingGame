#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int small_number, large_number, my_number, number, number_of_tries = 0;

    printf("Number Guessing Game!\n");
    printf("Enter smallest number: ");
    scanf("%d", &small_number);
    printf("Enter largest number: ");
    scanf("%d", &large_number);

    // Seed the random number generator
    srand(time(0));
    my_number = (rand() % (large_number - small_number + 1)) + small_number;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < my_number) {
            printf("Your guess is too low\n");
            number_of_tries++;
        } else if (number > my_number) {
            printf("Your guess is too high\n");
            number_of_tries++;
        } else {
            printf("Congratulations! Your guess is correct\n");
            printf("Your number was %d\n", my_number);
            printf("Total tries: %d\n", number_of_tries);
            break;
        }
    }

    return 0;
}
