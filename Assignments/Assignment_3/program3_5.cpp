// Accept on character from user and check whether that character is vowel(a,e,i,o,u) or not.

// Input : E    Output : TRUE
// Input : d    Output : FALSE

#include<iostream>
using namespace std;

# define TRUE 1
# define FALSE 0

bool CheckVowel(char cVowel)
{
    char c = '\0';
    
    if(cVowel == 'a' || cVowel == 'e' || cVowel == 'i' || cVowel == 'o' || cVowel == 'u' || cVowel == 'A' || cVowel == 'E' || cVowel == 'I' || cVowel == 'O' || cVowel == 'U' )
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    cout<<"Enter Character : \n";
    cin>>cValue;
    
    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        cout<<"It is Vowel";
    }
    else
    {
        cout<<"It is not Vowel";
    }
    return 0;
}