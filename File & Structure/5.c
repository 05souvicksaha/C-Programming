#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *fptr;
    char buffer[255];
    char filename[50];
    printf("Enter filename to read line-by-line: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) 
    exit(1);
    printf("\n--- File Content ---\n");
    for (; fgets(buffer, 255, fptr) != NULL; )
    {
        printf("%s", buffer);
    }
    fclose(fptr);
    return 0;
}