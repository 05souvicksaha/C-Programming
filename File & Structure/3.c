#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    char text[100];
    char filename[50];
    printf("Enter the filename to append to: ");
    scanf("%s", filename);
    getchar(); 
    fptr = fopen(filename, "a");
    if (fptr == NULL) 
    {
        printf("Error!\n");
        exit(1);
    }
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fprintf(fptr, "%s", text);
    printf("Data appended to '%s'.\n", filename);
    fclose(fptr);
    return 0;
}