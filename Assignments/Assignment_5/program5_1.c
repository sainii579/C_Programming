// Check Even or Odd

#include<stdio.h>

void CheckEventOdd(int num)
{
    if(num % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int number;

    printf("Enter number :");
    scanf("%d",&number);

    CheckEventOdd(number);

    return 0;
}