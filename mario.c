#include <cs50.h>
#include <stdio.h>

int get_size(void);          // Get size of grid
void print_grid(int height); // Print grid

int main(void)
{
    // Get size of grid
    int n = get_size();
    print_grid(n);
}

int get_size(void) // Get size of grid
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int height)
{
    int i, j;

    for (i = 1; i <= height; i++)
    {
        // Print spaces
        for (j = i; j < height; j++)
        {
            printf(" ");
        }
        // Print wall
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        // Print columns separators
        printf("  ");
        // Print second half
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        // Print new line
        printf("\n");
    }
}
