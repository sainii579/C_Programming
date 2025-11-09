// Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    int i = 1;
    int j = 5;

    while(j >= 1)
    {
        printf("%d\n",j);
        j--;
    }
}

int main()
{
    Display();
    return 0;
}