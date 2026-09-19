#include <stdio.h>
#include <string.h>

void reverseString(char str[]) 
{
    unsigned int n = strlen(str), i;
    char temp;
    for (i=0;i<n/2;i++) 
    {
        temp = str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }
}

void checkPalindrome(char original[]) 
{
    char reversed[50];
    strcpy(reversed, original);
    reverseString(reversed);
    if (strcmp(original, reversed) == 0) 
    {
        printf("Result: The string is a PALINDROME.\n");
    } 
    else 
    {
        printf("Result: The string is NOT a palindrome.\n");
    }
}

int main() 
{
    char str[100];
    printf("Enter a string:");
    scanf("%s", str);
    checkPalindrome(str);
    return 0;
}