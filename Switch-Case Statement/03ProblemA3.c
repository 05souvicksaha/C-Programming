#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch(ch) 
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
            {
                printf("%c is a Consonant.\n", ch);
            } 
            else 
            {
                printf("Invalid input! Please enter an alphabet.\n");
            }
        }
    return 0;
}