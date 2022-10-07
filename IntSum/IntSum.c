#include <stdio.h>
#include <conio.h>

int main()
{
    int integer1, integer2; // declaration
    
    printf("Enter the two integer to sum\n"); // prompt
    scanf("%d%d", &integer1, &integer2);      // read integer(s)

    printf("Sum of %d and %d is %d \n", integer1, integer2, integer1 + integer2); // print sum
    // wait for esc (27)

    return 0; // end
}