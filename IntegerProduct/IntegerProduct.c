#include <stdio.h>
#include <conio.h>

int main()
{
    int X;
    int Y;
    int Z;

    // welcome user
    printf("Enter first integer: ");

    // reads and stores user input
    scanf("%d", &X);

    printf("Enter second integer: ");

    // reads and stores user input
    scanf("%d", &Y);

    if (Y > X)
    {
        //Set Y as minor value (Swap if necessary)
        Y = Y + X;
        X = Y - X;
        Y = Y - X;
    }

    for (Y; Y > 0; Y--)
    {
        Z = Z + X;
    }

    // displays output
    printf("Your output is: %d \n", Z);

    // greet user
    printf("Press esc to exit.\n");
    // wait for esc (27)
    while (_getch() != 27)
    {
    }

    return 0;
}