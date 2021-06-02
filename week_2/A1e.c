/* Author: Zachary Bumpous
Last Updated: 6/2/21 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int charFreq(char text[150], char symbol)
{
    int counter = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == symbol)
        {
            counter++;
        }
    }
    return counter;
}


int main()
{
    
    char stringArray[150];
    fgets(stringArray, 150, stdin);
    int length = strlen(stringArray);
    length--;
    if (stringArray[length] == '\n')
    {
        stringArray[length] = '\0';
    }
    printf("%s\n", stringArray);
    printf("%d\n", length);
    
    int eCounter = charFreq(stringArray, 'e');
    int blankCounter = charFreq(stringArray, ' ');
    printf("e: %d | blankspaces: %d\n", eCounter, blankCounter);
    return 0;
}