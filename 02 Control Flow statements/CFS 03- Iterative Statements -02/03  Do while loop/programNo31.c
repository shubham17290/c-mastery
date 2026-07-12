//  guess the secret number
#include <stdio.h>

int main()
{
    int guess;
    int secret = 25;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guess);

    } while (guess != secret);

    printf("Correct!");

    return 0;
}