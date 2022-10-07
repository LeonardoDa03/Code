#include <stdio.h>
#include <conio.h>

int main()
{
    int number;

    //welcome user
    printf("Enter an integer: ");

    // reads and stores user input
    scanf("%d", &number);

    // displays user output
    printf("You entered: %d \n", number);

    //greet user
    printf("Press esc to exit.\n");
    //wait for esc (27)
    while (_getch() != 27){}

    return 0;
}