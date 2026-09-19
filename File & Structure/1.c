#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    char text[100];
    char filename[50];
    printf("Enter the filename to create (e.g., file.txt): ");
    scanf("%s", filename);
    getchar(); 
    fptr = fopen(filename, "w");
    if (fptr == NULL) 
    exit(1);
    printf("Enter text to write to the file: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fptr, "%s", text);
    printf("File '%s' created successfully.\n", filename);
    fclose(fptr);
    return 0;
}