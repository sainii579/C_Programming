// Accept one character from user and convert case of that character.

// Input : a       Output : A
// Input : D       Output : D

#include<stdio.h>

void DisplayConvert(char cValue)
{
    char c = '\0';
    if(islower(cValue))
    {
        printf("%c\t",toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("%c\t",tolower(cValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}