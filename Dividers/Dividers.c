#include <stdio.h>
#include <conio.h>

int main()
{
    int N;
    // welcome user
    printf("Enter an integer: ");

    // reads and stores user input
    scanf("%d", &N);
    
    printf("N is divisible by %d", 1);
    for (int i = 2; i <= (N / 2); i++)
    {
        if ((N % i) == 0)
        {
            printf("  %d", i);
        }
    }

    printf("\n\n");
    /* greet user
    //printf("Press esc to exit.\n");
    // wait for esc (27)
    while (_getch() != 27)
    {
    }*/
    return 0;
}