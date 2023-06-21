/*

OUTPUT
Enter Rows
6
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *

*/


// CODE
#include <stdio.h>
#include <stdlib.h>
void printStar(int no_stars);
int main()
{
    int column =0,row=0;
    printf("Enter Rows\n");
    scanf("%i",&row);
    int temp = 0;
    for(int i=row;i>=0;i--)
    {
        printSpace(temp);
        printStar(i);
        temp++;
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

