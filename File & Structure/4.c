#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *sourceFile, *destFile;
    char ch, srcName[50], destName[50];
    printf("Enter source filename: ");
    scanf("%s", srcName);
    printf("Enter destination filename: ");
    scanf("%s", destName);
    sourceFile = fopen(srcName, "r");
    destFile = fopen(destName, "w");
    if (sourceFile == NULL || destFile == NULL) 
    {
        printf("Error opening files.\n");
        exit(1);
    }
    for (ch = fgetc(sourceFile); ch != EOF; ch = fgetc(sourceFile)) 
    {
        fputc(ch, destFile);
    }
    printf("Copied content from %s to %s.\n", srcName, destName);
    fclose(sourceFile);
    fclose(destFile);
    return 0;
}