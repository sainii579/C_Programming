// Check Positive, Negative or Zero

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num >= 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Negative");
    }
}

int main()
{
    int number;
    printf("Enter number :");
    scanf("%d", &number);
    CheckNumberType(number);
    return 0;
}