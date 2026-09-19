#include <stdio.h>
void printAbbreviation(char name[])
{
    int i, j;

    printf("Abbreviation form of your name: %c. ", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0')
        {

            for (j = i + 1; name[j] != '\0' && name[j] != ' '; j++)
                ;

            if (name[j] != '\0')
                printf("%c. ", name[i + 1]);
            else
                printf("%s", &name[i + 1]);
        }
    }
}

int main()
{
    char name[100];

    printf("Enter your name:\n");
    fgets(name, 100, stdin);

    printAbbreviation(name);
    return 0;
}
