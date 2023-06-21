/*
Output
Enter Rows
9
        *
       * *
      *   *
     *     *
    *       *
   *         *
  *           *
 *             *
* * * * * * * * * 
*/


//Code -- >
#include <stdio.h>
#include <stdlib.h>
void printStar(int no_stars);
int main()
{
    int row=0;
    printf("Enter Rows\n");
    scanf("%i",&row);
    int temp = row-1;
    int x=1;
    for(int i=0;i<row;i++)
    {
        if(i==0)
        {
            printSpace(temp);
            printStar(1);
        }
        else if(i==-1+row)
        {
            printStar(row);
        }
        else
        {
            printSpace(temp);
            printStar(1);
            printSpace(x);
            printStar(1);
            x+=2;
        }
        temp--;
        printf("\n");
    }



    return 0;
}
void printStar(int no_stars)
{
    for(int i=0;i<(no_stars*2)-1;i++)
    {
        if(i%2==0)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
}
void printSpace(int no)
{
    for(int i=0 ;i<no;i++)
    {
        printf(" ");
    }
}


