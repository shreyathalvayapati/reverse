#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int number = get_int("Please enter a number: ");

    if (number <= 0)
    {
        printf("\nERROR: Please enter a number that is greater than zero.\n\n");
        return 1;
    }

    do
    {
        printf("%d\n", number);
        number --;
    }
    while (number > 0);

    return 0;
}