/*

Output
Enter Number of row ,column
6 6
* * * * * *
*         *
*         *
*         *
*         *
* * * * * *

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r=0,c=0;
    printf("Enter Number of row ,column\n");
    scanf("%i%i",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0||j==0||i==r-1||j==c-1)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }

        }
        printf("\n");
    }

    return 0;
}
