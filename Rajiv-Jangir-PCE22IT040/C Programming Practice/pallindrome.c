#include <stdio.h>
#include <string.h>
 
void checkPalindrome(char [], int);
 
int main()
{
    char wordPal[25];
    printf("\n Recursion : Check a given string is Palindrome or not :\n");
	
    printf(" Input  a word to check for palindrome : ");
    scanf("%s", wordPal);
    checkPalindrome(wordPal, 0);
 
    return 0;
}
 
void checkPalindrome(char wordPal[], int index)
{
    int len = strlen(wordPal) - (index + 1);
    if (wordPal[index] == wordPal[len])
    {
        if (index + 1 == len || index == len)
        {
            printf(" The entered word is a palindrome.\n");
            return;
        }
        checkPalindrome(wordPal, index + 1);
    }
    else
    {
        printf(" The entered word is not a palindrome.\n");
    }
}
