// Author: Zachary Bumpous
// Last Updated: 5/27/2021

#include <stdio.h>
#include <stdlib.h>

void printArray( int L[], int many )
{
    int i;
    for (i = 0; i < many; i++)
    {
        printf("%d ", L[i]);
    }
}

int main()
{
    // 1) Create an array of size 100
    int array [ 100 ];
    // 2) Ask user to enter numbers until total is > 50
    // -- Numbers between 4 & 17 ARE allowed --
    // -- Store each valid number to array --
    printf("Please enter numbers between 4 & 17 until total > 50: ");
    int sum = 0, addToSum = 0, count = 0;
    do
    {
        scanf("%d", &addToSum);
        if ( addToSum < 4 || addToSum > 17)
            printf("Invalid input\n");
        else
        {
            array[count] = addToSum;
            count++;
            sum += addToSum;
        }
    } while ( sum < 50 );

    // 3) Report how many values & sum
    printf("%d values entered with a sum of %d\n", count, sum);

    // 4) Print out the list of numbers using printArray()
    printArray( array, count);
}