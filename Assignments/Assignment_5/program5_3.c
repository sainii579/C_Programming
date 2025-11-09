// Check leap year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if(year % 4 == 0)
    {
         printf("%d is a leap year");
    }
    else
    {
        printf("%d is not a leap year");
    }
}

int main()
{
    int yr;

    printf("Enter year :");
    scanf("%d", &yr);

    CheckLeapYear(yr);
    return 0;
}