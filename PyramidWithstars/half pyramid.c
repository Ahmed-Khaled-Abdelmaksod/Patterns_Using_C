/*
Output
Enter Number of rows : 7
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * * * *

*/

// code

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r=0;
    printf("Enter Number of rows : ");
    scanf("%i",&r);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
