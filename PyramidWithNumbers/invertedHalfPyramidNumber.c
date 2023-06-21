/*

Output:
Enter Number of rows
8
1 2 3 4 5 6 7 8
1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/
//CODE

#include <stdio.h>
#include <stdlib.h>
void printNumber(int x);
int main()
{
    int row=0,column=0,x;
    x=1;
    printf("Enter Number of rows\n");
    scanf("%i",&row);
    for(int i=row;i>=1;i--)
    {
        printNumber(i);
        printf("\n");
    }
    return 0;
}
void printNumber(int x)
{
    for(int j=1;j<=x;j++)
    {
        printf("%i ",j);
    }
}

