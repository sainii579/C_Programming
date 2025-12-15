// Accept number from user and display below pattern

// Input : 8
// Output : 2   4   6   8   10  12  14  16

import java.util.*;

class  Pattern
{
   public void Display(int iNo)
   {
      int iCnt = 0;

      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
         System.out.printf("%d\t",2 * iCnt);
      }
   }
}

class program26_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter number of elements : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}