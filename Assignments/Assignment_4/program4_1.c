// Write a program which accepts number from user and display its multiplication factors

/* Input : 12
Output : 144        (1 * 2 * 3 * 4 * 6)

Input : 13
Output : 1          (1)

Input : 10
Output : 10         (1 * 2 * 5)  */

#include<stdio.h>

int MultFact(int iNo)
{ 
    printf(" Addition of Factor %d is : \n",iNo); 

    int i ;  
    int iMult = 1; 

    for(i = 1; i < iNo ; i++)
    {
        if((iNo % i) == 0)
        {
           iMult = iMult * i;
        }
    }
   return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
 
   printf("%d",iRet);

    return 0;
}