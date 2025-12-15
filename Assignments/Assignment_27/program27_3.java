// Accept number of rows and columns from user and display below Pattern.

/* Input :  iRow = 3
            iCol = 5

   Output :  5     4     3     2     1
             5     4     3     2     1
             5     4     3     2     1
*/

import java.util.*;

class Pattern
{
   public void Display(int iRow, int iCol)
   {
      int i = 0, j = 0;

      for(i = 1; i <= iRow; i++)
      {
         for(j = iCol; j >= 1; j--)
         {
           System.out.printf("%d\t",j);
         }
           System.out.printf("\n");
      }
   }
}

class program27_3
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);
      int iValue1 = 0, iValue2 = 0;

      System.out.println("Enter number of rows and columns : ");
      iValue1 = sobj.nextInt();
      iValue2 = sobj.nextInt();

      Pattern pobj = new Pattern();
      pobj.Display(iValue1,iValue2);  
   }
}