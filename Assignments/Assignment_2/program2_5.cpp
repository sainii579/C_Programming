// Accept number from user and check whether number is even or odd.

#include<stdio.h>

bool CheckEven(int iNo)
{ 
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    // Display result
    if(bRet == true)
    { 
       printf("number is even");
    }
    else
    {
        printf("Number is odd");
    }

    return 0;
}