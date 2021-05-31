/* Author: Zachary Bumpous
Last Updated: 5/31/21 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creates function that prints new line
void newLine()
{        
    printf("\n");
}

// Function prints the x amount of @ characters with x == inputString's length
void printSymbol(char sLength)
{
    int symbolPrint = 0;

    do
    {
        printf("@");
        symbolPrint++;
    }
    while (symbolPrint < sLength);
}

int main()
{
    

    // Store a string input from the user and print it
    char inputString[50];
    printf("Enter a word:");
    scanf("%s", inputString);
    printf("%s", inputString);
    newLine();
    // Store the length of the string input from user
    int stringLength = strlen(inputString);

    printSymbol(stringLength);
    newLine();
    printf("%s", inputString);
    newLine();
    printSymbol(stringLength);
    newLine();

    // Iterates over inputString and counts how many 'd' chars there are and prints this amount
    int charCount = 0;
    for (int i = 0; i < stringLength; i++)
    {
        if (inputString[i] == 'd')
        {
            charCount++;
        }
    }
    printf("%d", charCount);
    newLine();
    return 0;
}
