#include <stdio.h>

int main()
{
    int Num = 1, ExpTwo = 2, Madre=1;
    while (Madre > 0)
    {
        Num=Madre;
        printf("\n %d:", Madre);
        // scanf("%d", &Num);

        while (ExpTwo * 2 <= Num)
        {
            ExpTwo = ExpTwo * 2;
        }

        while (ExpTwo >= 0)
        {
            printf("%d", Num / ExpTwo);
            Num = Num % ExpTwo;
            ExpTwo = ExpTwo / 2;
        }

        Madre++;
        ExpTwo=2;
    }
    return 0;
}