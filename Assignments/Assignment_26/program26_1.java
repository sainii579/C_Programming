// Accept number from  user and display below pattern.

/* Input : 5
   
   Output :     A       B       C       D       E

*/

import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {    
       int iCnt = 0;
       char ch = 'A';

       for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
          System.out.printf("%c\t",ch);
          ch++;
       }
    }
}

class program26_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

       System.out.println("Enter number of element : ");
       iValue = sobj.nextInt();
      
       Pattern pobj = new Pattern();
       pobj.Display(iValue);

    }
}