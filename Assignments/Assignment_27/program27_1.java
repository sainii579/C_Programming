// Accept number of rows and number of columnsfrom user and display below pattern.

/* Input :   iRow = 4      iCol = 3
   Output :     *       *       *       *
                *       *       *       *
                *       *       *       *
*/

import java.util.*;

class Pattern
{
   public void Display(int iRow, int iCol)
   {
      int i = 0, j= 0;

      for(i = 0; i < iRow; i++)
      {
         for(j = 0; j < iCol; j++)
         {
            System.out.print("*\t");
         }
         System.out.print("\n");
      }
   }
}

class program27_1
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);

      int iValue1 = 0;
      int iValue2 = 0;

      System.out.println("Enter number of rows and columns : ");
      iValue1 = sobj.nextInt();
      iValue2 = sobj.nextInt();

      Pattern pobj = new Pattern();
      pobj.Display(iValue1,iValue2);
   }
}