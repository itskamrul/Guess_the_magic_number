#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ran, guess, min = 1, max = 10;

    srand(time(NULL));
    ran = rand() % (max - min+1) + min;
    printf("Guess a lucky number 1- 10: ");
    scanf("%d", &guess);
    if (ran == guess)
    {
        printf("You're lucky");
    }
    else
    {
        printf("Try next time. The number is: %d", ran);
    }
}