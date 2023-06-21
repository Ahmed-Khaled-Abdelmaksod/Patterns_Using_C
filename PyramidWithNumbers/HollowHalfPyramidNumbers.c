/*
Output
6
1
1 2
1   3
1     4
1       5
1 2 3 4 5 6
*/
//Code
#include <stdio.h>
int main()
{
    int row=0;
    scanf("%i",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            // special case
            if(i==row)
            {
                printf("%i ",j);
            }
            else if(j==1||j==i)
            {
                printf("%i ",j);
            }
            else
            {
                printf("  ");
            }

        }
        printf("\n");
    }
    return 0;
}
