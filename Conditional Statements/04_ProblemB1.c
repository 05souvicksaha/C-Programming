#include<stdio.h>
int main()
{
    int a;
    printf("Enter Student's Marks: ");
    scanf("%d", &a);
    if (a >= 90)
    {
        printf("Grade A\n");
    }
    else if (a >= 75)
    {
        printf("Grade B\n");
    }
    else if (a >= 50)
    {
        printf("Grade C\n");
    }
    else
    {
        printf("Failed\n");
    }
    return 0;}
