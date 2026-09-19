#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{
    FILE *fptr;
    char ch, filename[50];
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;
    printf("Enter filename to analyze: ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) 
    {
        printf("File not found.\n");
        exit(1);
    }
    for (ch = fgetc(fptr); ch != EOF; ch = fgetc(fptr)) 
    {
        chars++;
        if (ch == '\n') 
        {
            lines++;
        }
        if (isspace(ch)) 
        {
            in_word = 0;
        } 
        else if (in_word == 0) 
        {
            in_word = 1;
            words++;
        }
    }
    if (chars > 0 && lines == 0) lines = 1; 
    printf("File Analysis:\nCharacters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fptr);
    return 0;
}