/*

OUTPUT

Enter Rows & Columns
10
6
* * * * *
*      *
*     *
*    *
*   *
*  *
* *
*

*/

// CODE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int column =0,row=0;
    printf("Enter Rows & Columns\n");
    scanf("%i%i",&row,&column);

    for(int i=row;i>0;i--)
    {

        if(i==row)
        {
            for(int j=0;j<column-1;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else{
            for(int j=0;j<=column;j++)
            {
                if(j==0)
                {
                    printf("* ");

                }
                else if(j==column)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
            column--;
        }

    }
    return 0;
}

void printArrays(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {

        printf("%i\t",arr[i]);
    }
}


