// Author: Zachary Bumpous
// Last Updated: 6/24/2021

#include <stdio.h>
#include <stdlib.h>

void countUp( int start, int end )
{
    for (int i = start; i <= end; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    countUp( 1, 10 );
    return 0;
}