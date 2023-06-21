/*
output
5
1 2 3 4 5
2     5
3   5
4 5
5
*/
//Code
#include <stdio.h>
int main()
{
    int row=0;
    scanf("%i",&row);
    int space = 2*row-2;
    int loops=0;
    for(int i=1;i<=row;i++)
    {
        //loops = 2*i-1;
        //spaces(space+1);

        if(i==1)
        {
            for(int j=1;j<=row;j++)
            {
                printf("%i ",j);
            }
        }
        else
        {
            for(int j=i;j<=row;j++)
            {
               if(j==i)
               {
                   printf("%i ",i);
               }
               else if(j==row)
               {
                   printf("%i ",row);
               }
               else
               {
                   spaces(2);
               }
            }
        }
        for(int j=i;j<=row;j++)
        {

        }

        //space-=2;
        printf("\n");
    }
    return 0;
}
void spaces(int number)
{
    for(int i=0;i<number;i++)
    {
        printf(" ");
    }
}
