#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    char ch;
    char filename[50];
    printf("Enter the filename to read: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) 
    {
        printf("Error: File not found.\n");
        exit(1);
    }
    printf("\n--- File Contents ---\n");
    for (ch = fgetc(fptr); ch != EOF; ch = fgetc(fptr)) 
    {
        printf("%c", ch);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}