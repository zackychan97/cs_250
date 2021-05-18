/*
* Author: Zachary Bumpous
* Last Updated: 5/18/2021
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1) Read number from user
    int userInput, doubleInput;
    printf("Please enter a number: ");
    scanf("%d", &userInput);

    // 2) Double the number & print it
    doubleInput = userInput * 2;
    printf("Value of user input multiplied by 2: %d\n", doubleInput);

    // 3) Using a loop, print the original userInput out 9 times
    for (int i = 1; i < 10; i++)
    {
        printf("Print Line %d of 9. User input: %d\n", i,  userInput);
    }

    // 4) Ask the user to enter numbers & keep reading until the sum > 50
    int sum = 0, count = 0, addToSum  = 0;
    do
    {
        printf("Keep entering numbers, program will stop when sum > 50: ");
        scanf("%d", &addToSum);
        count = count + 1;
        sum = sum + addToSum;
    } while (sum < 50);
    printf("The sum is %d and the number of values inputed is %d", sum, count);
    return 0;
}
