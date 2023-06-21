/*
Output 
5
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
//Code
#include <stdio.h>
int main()
{
    int row=0;
    scanf("%i",&row);
    int space = 2*row-2;
    int max=0;
    for(int i=1;i<=row;i++)
    {
        max = 2*i-1;
        spaces(space);

        for(int j=i;j<=max;j++)
        {
            printf("%i ",j);
        }
        for(int j=max-1;j>=i;j--)
        {
            printf("%i ",j);
        }

        space-=2;
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
