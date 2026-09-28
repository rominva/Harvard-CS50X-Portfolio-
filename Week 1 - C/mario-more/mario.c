#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 9);

    // Print a pyramid of that height
    for (int n = 1; n <= height; n++)
    {
        // print row of bricks
        print_row(height - n, n);
    }
}

void print_row(int spaces, int bricks)
{
    // print spaces
    for (int a = 0; a < spaces; a++)
    {
        printf(" ");
    }

    // print bricks
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // print gap
    printf("  ");

    // print bricks again
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // go to next line
    printf("\n");
}
