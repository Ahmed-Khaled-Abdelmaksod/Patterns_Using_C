/*

Output
5
         1
       1   2
     1       3
   1           4
 1   2   3   4   5

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
        loops = 2*i-1;
        spaces(space+1);

        for(int j=1;j<=loops;j++)
        {
            if(i==row)
            {
               printf("%i   ",j);
               if(j==row)
               {
                   break;
               }
            }
            else if(j==1)
            {
                printf("%i   ",j);
            }
            else if(j==i)
            {
                printf("%i",j);
            }
            else
            {
                printf("    ");
            }
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
