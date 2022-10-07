#include <stdio.h>
#include <conio.h>

int main()
{
    int N;
    int c = 0;
    // welcome user
    printf("Enter an integer: ");

    // reads and stores user input

    do{
        scanf("%d", &N);
        if (!(N % 2))
        {
            c++;
        }
    } while(N!=0);

    // displays user output
    printf("You have %d odd numners \n", c);

    // greet user
    printf("Press esc to exit.\n");
    // wait for esc (27)
    /*
    while (_getch() != 27)
    {
    }*/

    return 0;
}