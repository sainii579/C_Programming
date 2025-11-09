// Write a program which accepts number from user and return difference between summation of all its factores and non factors

/*
   Input :  12
   Output : -34   (16-50)

   Input : 10
   Output : -29   (8-37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    printf("Factor of %d are :",iNo); 
    int i = 0;
    int iSumFact = 0, iSumNonFact = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact += i;  // or iSumFact = iSumFact + i;
        }
        else
        {
            iSumNonFact += i;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
     
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}