// Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.

// Input : E    Output : TRUE
// Input : d    Output : FALSE

#include<stdio.h>
#include<stdbool.h>

// typedef int _____;

# define TRUE 1
# define FALSE 0

bool CheckVowel(char cVowel)
{
    char c = '\0';
    
    if(cVowel == 'a' || cVowel == 'e' || cVowel == 'i' || cVowel == 'o' || cVowel == 'u' || cVowel == 'A' || cVowel == 'E' || cVowel == 'I' || cVowel == 'O' || cVowel == 'U' )
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter Character : \n");
    scanf("%c",&cValue);
    
    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}