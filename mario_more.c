#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declaring a variable out of loops
    int n;
    // asks the user for a correct value between 1 and 8
    do
    {
        n = get_int("How tall the pyramid should be?\n");
    }
    while (n <= 0 || n > 8);

    // number of rows
    for (int i = 0; i < n; i++)
    {
        // number of initial empty spaces
        for (int j = 0; j < (n - i - 1); j++)
        {
            printf(" ");
        }

        // number of piramid's left side blocks
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // middle empty spaces
        printf("  ");

        // number of piramid's left side blocks
        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        // to end the row so the loop start again in the next one
        printf("\n");
    }
}
