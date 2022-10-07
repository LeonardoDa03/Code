#include <stdio.h>
#define sentinella '.'
int main()
{
    char c, flag = 0;
    scanf("%c", &c);
    while (c != sentinella)
    {
        scanf("%c", &c);
        if (c == '(' && flag==1)
        {
            flag = 0;
            //apposto, hai aperto parentesi dopo aver chiuso
        }
        else if (c == ')' && flag == 0)
        {
            flag = 1;
            //apposto, hai chiuso dopo aver precedentemente aperto
        }
    }
    printf("%hhu",flag);
    return 0;
}