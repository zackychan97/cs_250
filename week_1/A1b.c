/*
* Author: Zachary Bumpous
* Last Updated: 5/21/2021
*/

#include <stdio.h>
#include <stdlib.h>

// 1) Function triple: takes input integer & returns input * 3
int triple(int inputValue)
{
    int tripleInputValue = inputValue * 3;
    return tripleInputValue;
}

// 2) Function biggest: input 3 integers & returns largest input value
int biggest(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        return num1;
    } else if (num2 > num1 && num2 > num3)
    {
        return num2;
    } else
    {
        return num3;
    }
}

/*
3)
Function printValNtimes: input two integers, one being the value
you wish to be printed, and the other the amount of times you
wish to print
*/

void printValNtimes(int val, int many)
{
    for (int i = 0; i < many; i++)
    {
        printf("Value input to function: %d\n", val);
    }
}

// 4) Function getNum: reads two int inputs to describe a range

int getNum(int L, int H)
{
    int scannedValue;
    printf("Enter a number between L: %d and H: %d\n", L, H);
    scanf("%d", &scannedValue);
    if (scannedValue >= L && scannedValue  <= H)
    {
        printf("Value is %d\n", scannedValue);
    } else
    {
        do
        {
            printf("Enter a number between L: %d and H: %d\n", L, H);
            scanf("%d", &scannedValue);
        } while (scannedValue < L || scannedValue > H);
        printf("Value is %d\n", scannedValue);
    }
}

int main()
{
int function1 = triple(3);
printf("Result of function triple with input 3: %d\n", function1);

int function2 = biggest(10, 50, 100);
    printf("Result of function biggest with inputs 10, 50, 100: %d\n", function2);

    printf("Result of function printValNtimes with inputs 10, 5:\n");
    printValNtimes(10, 5);

    int function4 = getNum(5, 25);

    return 0;
}
